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
  cin >> n;
  string s;
  cin >> s;

  bool flag = true;

  rep(i, 0, n) {
    if (s[i] == '"') {
      flag = !flag;
      continue;
    }
    if (flag && s[i] == ',') {
      s[i] = '.';
    }
  }
  cout << s << endl;
}
