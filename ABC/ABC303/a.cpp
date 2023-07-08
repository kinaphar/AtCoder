#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n;
  string s, t;
  cin >> n >> s >> t;

  string flag = "Yes";

  rep(i, 0, n) {
    if (s[i] != t[i]) {
      if (s[i] == 'o' && t[i] == '0') {
        continue;
      }
      if (s[i] == '0' && t[i] == 'o') {
        continue;
      }
      if (s[i] == '1' && t[i] == 'l') {
        continue;
      }
      if (s[i] == 'l' && t[i] == '1') {
        continue;
      }
      flag = "No";
    }
  }

  cout << flag << endl;
}
