#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> vn(n);
  vector<int> vm(m);

  rep(i, 0, n) { cin >> vn[i]; }
  rep(i, 0, m) { cin >> vm[i]; }

  int ans = 0;
  rep(i, 0, n) {
    rep(j, 0, m) {
      if (vn[i] % 1000 == vm[j]) {
        ans++;
        break;
      }
    }
  }

  cout << ans;
}
