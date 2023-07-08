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

  int a[n + 1];

  rep(i, 1, n + 1) { cin >> a[i]; }

  int ans = 0;
  int tmp;

  rep(i, 0, m) {
    cin >> tmp;
    ans += a[tmp];
  }
  cout << ans << endl;
}
