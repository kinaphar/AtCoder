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
  string flag = "Yes";

  int l = s.length();

  if (l != 8) {
    flag = "No";
  }

  rep(i, 0, l) {
    if (i == 0 || i == l - 1) {
      if (s[i] < 'A' || 'Z' < s[i]) {
        flag = "No";
      }
    } else if (i == 1) {
      if (s[i] < '1' || '9' < s[i]) {
        flag = "No";
      }
    } else {
      if (s[i] < '0' || '9' < s[i]) {
        flag = "No";
      }
    }
  }
  cout << flag << endl;
}
