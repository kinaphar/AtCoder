#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, p, q, r, s, tmp;
  cin >> n >> p >> q >> r >> s;

  vector<int> v(n);

  rep(i, 0, n) { cin >> v[i]; }
  rep(i, -1, q - p) {
    tmp = v[p + i];
    v[p + i] = v[r + i];
    v[r + i] = tmp;
  }
  cout << v[0];
  rep(i, 1, n) { cout << " " << v[i]; }
}
