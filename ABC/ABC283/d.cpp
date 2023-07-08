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

  int l = s.length();

  map<int, string> m;

  int depth = 0;

  // char c;

  map<char, int> flag;

  string chokudai = "Yes";

  rep(i, 0, l) {
    if (s[i] == '(') {
      depth++;
      m[depth] = "";
    } else if (s[i] == ')') {
      rep(j, 0, m[depth].length()) { flag[m[depth][j]] = 0; }
      depth--;
    } else {
      if (flag[s[i]] == 1) {
        chokudai = "No";
        break;
      }
      flag[s[i]] = 1;
      m[depth] += s[i];  // string + char
    }
  }

  cout << chokudai << endl;
}
