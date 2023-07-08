#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  // multisetで大きい順にfor文？.
  ll n, k, q, x, y, ans;
  cin >> n >> k >> q;

  vector<ll> v(n + 1);
  multiset<ll> ms;

  repl(i, 0, n) { ms.insert(0); }

  repl(i, 0, q) {
    cin >> x >> y;
    ms.erase(ms.find(v[x]));
    ms.insert(y);
    v[x] = y;

    ans = 0;
    auto itr = ms.end();
    rep(i, 0, k) {
      --itr;
      ans += *itr;
    }
    cout << ans << endl;
  }
}
