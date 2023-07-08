#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;            // 10桁 0が9個
#define LL_MAX 9223372036854775806;  // 19桁 0が18個
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n;
  ll t, tmp;
  cin >> n >> t;
  vector<ll> v(n);
  ll total = 0;

  rep(i, 0, n) {
    cin >> v[i];
    total += v[i];
  }
  // cout << "total = " << total << endl;

  t %= total;
  // cout << "t = " << t << endl;

  rep(i, 0, n) {
    if (t < v[i]) {
      cout << i + 1 << " " << t << endl;
      break;
    } else {
      t -= v[i];
      // cout << "t = " << t << endl;
    }
  }
}
