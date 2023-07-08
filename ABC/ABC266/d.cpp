#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  // cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ----------

  vector<vector<ll>> dp(100005, vector<ll>(5, 0));

  ll n;
  cin >> n;

  int t, x, a;
  for (int i = 0; i < n; i++) {
    cin >> t >> x >> a;
    dp[t][x] = a;
  }

  dp[0][1] = 0;
  dp[0][2] = 0;
  dp[0][3] = 0;
  dp[0][4] = 0;

  dp[1][2] = 0;
  dp[1][3] = 0;
  dp[1][4] = 0;

  dp[2][3] = 0;
  dp[2][4] = 0;

  dp[3][4] = 0;

  for (int i = 0; i < 100000; i++) {
    dp[i + 1][0] = dp[i + 1][0] + max(dp[i][0], dp[i][1]);
    dp[i + 1][1] = dp[i + 1][1] + max({dp[i][0], dp[i][1], dp[i][2]});
    dp[i + 1][2] = dp[i + 1][2] + max({dp[i][1], dp[i][2], dp[i][3]});
    dp[i + 1][3] = dp[i + 1][3] + max({dp[i][2], dp[i][3], dp[i][4]});
    dp[i + 1][4] = dp[i + 1][4] + max(dp[i][3], dp[i][4]);
  }

  ll ans = max({dp[100000][0], dp[100000][1], dp[100000][2], dp[100000][3],
                dp[100000][4]});
  cout << ans;
}
