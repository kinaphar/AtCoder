#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, q, qtype, k, x, flag;
  vector<int> v(n + 1);

  cin >> n;

  rep(i, 1, n + 1) { cin >> v[i]; }

  cin >> q;
  flag = 0;

  rep(i, 0, q) {
    cin >> qtype;
    if (qtype == 1) {
      cin >> k >> x;
      v[k] = x;
    } else {
      if (flag == 1) {
        cout << endl;
      } else {
        flag = 1;
      }
      cin >> k;
      cout << v[k];
    }
  }
}
