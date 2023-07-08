#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  string s, t;
  cin >> s >> t;
  int ss = s.size();
  int ts = t.size();

  int mh = ts + 1;
  int mt = ts + 1;
  rep(i, 0, ts) {
    if (s[ss - 1 - i] != t[ts - 1 - i] && s[ss - 1 - i] != '?' &&
        t[ts - 1 - i] != '?') {
      mt = i + 1;
      break;
    }
  }
  rep(i, 0, ts) {
    if (s[i] != t[i] && s[i] != '?' && t[i] != '?') {
      mh = i + 1;
      break;
    }
  }

  // cout << "mt " << mt << endl;
  // cout << "mh " << mh << endl;

  rep(i, 0, ts + 1) {
    if (i < ts - mt + 1 || i >= mh) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  }
}
