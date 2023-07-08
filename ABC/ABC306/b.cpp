#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int getDigits(int value, int m, int n) {
  int mod_value;
  int result;

  /* n桁目以下の桁を取得 */
  mod_value = value % (int)pow(10, n + 1);

  /* m桁目以上の桁を取得 */
  result = mod_value / pow(10, m);

  return result;
}

int main() {
  unsigned long long ans = 0;
  vector<unsigned long long> v(64);
  string s;

  rep(i, 0, 64) { cin >> v[i]; }

  for (int i = 63; i > 0; i--) {
    ans += v[i];
    ans *= 2;
  }

  ans += v[0];
  cout << ans << endl;
}
