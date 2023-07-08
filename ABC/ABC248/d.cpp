#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;

  vector<vector<int>> dp(n + 1, vector<int>(0));

  int a[n];

  // for (int j = 0; j < n; j++) {
  //   dp[0][j] = 0;
  // }
  for (int i = 0; i < n; i++) {
    for (int j = 1; j < n; j++) {
      dp[i][j] = dp[j][i - 1];
    }
    cin >> a[i];
    dp[a[i]][i]++;
  }

  int q;
  cin >> q;

  int l, r, x;
  for (int i = 0; i < q; i++) {
    cin >> l >> r >> x;
    cout << dp[x][r] - dp[x][l - 1] << endl;
  }
}
