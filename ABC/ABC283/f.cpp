#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<int> v(n);

  rep(i, 0, n) { cin >> v[i]; }

  int m = 400000;
  int j1, j2;
  rep(i, 0, n) {
    m = 400000;
    rep(js, 1, n / 2) {
      j1 = i - js;
      if (j1 >= 0) {
        m = min(m, abs(v[i] - v[j1]) + js);
      }
      j2 = i + js;
      if (j2 < n) {
        m = min(m, abs(v[i] - v[j2]) + js);
      }
      // cout << "[" << m << "]  ";
      // cout << j1 << " (";
      // cout << abs(v[i] - v[j1]) << ") ";
      // cout << j2 << " (";
      // cout << abs(v[i] - v[j2]) << ") " << endl;
      if (m <= js + 2) {
        // cout << js << " ";
        // cout << j1 << " (";
        // cout << abs(v[i] - v[j1]) << ") ";
        // cout << j2 << " (";
        // cout << abs(v[i] - v[j2]) << ") ";
        break;
      }
    }
    cout << m;
    if (i != n - 1) {
      cout << " ";
    }
    // cout << m << " ";
  }
}
