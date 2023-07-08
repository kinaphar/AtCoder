#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, q, c, x;
  cin >> n >> q;
  vector<int> v(n + 1);

  rep(i, 0, q) {
    cin >> c >> x;
    if (c == 1) {
      v[x] += 1;
    }

    if (c == 2) {
      v[x] += 2;
    }

    if (c == 3) {
      if (v[x] >= 2) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
}
