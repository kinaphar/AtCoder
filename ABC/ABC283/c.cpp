#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  string s;
  cin >> s;

  int ans = 0;

  while (s != "") {
    if (s[0] == '0' && s.length() > 1) {
      if (s[1] == '0') {
        s.erase(0, 1);
      }
    }
    s.erase(0, 1);
    ans++;
  }

  cout << ans << endl;
}
