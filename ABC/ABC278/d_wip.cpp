#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); ++i)
#define repl(i, s, n) for (ll i = s; i < (int)(n); ++i)

int main() {
  ll n, a, q, t, i, x;

  ll reset = 0;

  map<ll, ll> m;

  cin >> n;
  repl(i, 1, n + 1) {
    cin >> a;
    m[i] = a;
    // cout << "i=" << i << ", a=" << a << endl;
  }

  cin >> q;
  repl(i, 0, q) {
    cin >> t;
    if (t == 1) {
      // cout << "case 1" << endl;
      cin >> x;
      reset = x;
      m.clear();
    } else if (t == 2) {
      // cout << "case 2" << endl;
      cin >> i >> x;
      if (m.find(i) != m.end()) {
        m[i] += x;
      } else {
        m[i] = x;
      }
    } else if (t == 3) {
      // cout << "case 3" << endl;
      cin >> i;
      if (m.find(i) != m.end()) {
        cout << reset + m[i] << endl;
      } else {
        cout << reset << endl;
      }
    }
  }
}
