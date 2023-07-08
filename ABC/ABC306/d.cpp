#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  ll n;
  cin >> n;

  vector<vector<ll>> v(2, vector<ll>(n + 1));
  vector<vector<ll>> dp(2, vector<ll>(n + 1));

  repl(i, 1, n + 1) { cin >> v[0][i] >> v[1][i]; }

  // bool poisonable = false; ←いらない気がする.
  repl(i, 1, n + 1) {
    if (v[0][i] == 0) {  // 解毒剤入り.
      dp[0][i] =
          max({dp[0][i - 1], dp[0][i - 1] + v[1][i], dp[1][i - 1] + v[1][i]});
      dp[1][i] = dp[1][i - 1];
    }

    if (v[0][i] == 1) {  // 毒入り.
      dp[0][i] = dp[0][i - 1];
      dp[1][i] = max(dp[1][i - 1], dp[0][i - 1] + v[1][i]);
    }
  }

  cout << max(dp[0][n], dp[1][n]) << endl;
}
