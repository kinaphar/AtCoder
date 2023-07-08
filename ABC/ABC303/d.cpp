#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  ll x, y, z;  // a, shift + a, Caps.
  cin >> x >> y >> z;
  string s;
  cin >> s;

  vector<vector<ll>> dp(2, vector<ll>(s.length()));

  if (s[0] == 'a') {
    dp[0][0] = x;
    dp[1][0] = z + y;
  }
  if (s[0] == 'A') {
    dp[0][0] = y;
    dp[1][0] = z + x;
  }

  rep(i, 1, s.length()) {
    if (s[i] == 'a') {
      dp[0][i] = min(dp[0][i - 1] + x, dp[1][i - 1] + z + x);
      dp[1][i] = min(dp[0][i - 1] + z + y, dp[1][i - 1] + y);
    }

    if (s[i] == 'A') {
      dp[0][i] = min(dp[0][i - 1] + y, dp[1][i - 1] + z + y);
      dp[1][i] = min(dp[0][i - 1] + z + x, dp[1][i - 1] + x);
    }
  }
  cout << min(dp[0][s.length() - 1], dp[1][s.length() - 1]) << endl;
}
