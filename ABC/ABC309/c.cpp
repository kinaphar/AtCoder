#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  ll n, k, a, b;
  cin >> n >> k;

  ll total = 0;
  ll ans = 1;

  map<ll, ll> m;

  rep(i, 0, n) {
    cin >> a >> b;
    m[a] = m[a] + b;
  }

  map<ll, ll>::reverse_iterator i = m.rbegin();
  for (; i != m.rend(); ++i) {
    total += i->second;
    // cout << "total = " << total << endl;
    if (total > k) {
      ans = i->first + 1;
      break;
    }
  }

  cout << ans << endl;
}
