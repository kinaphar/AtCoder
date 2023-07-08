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

  vector<int> v(n);
  int step = 0;

  rep(i, 0, n) {
    if (s[i] == '(') {
      step++;
      v[i] = step;
    } else if (s[i] == ')') {
      v[i] = step;
      if (step > 0) step--;
    } else {
      v[i] = step;
    }
    cout << step << endl;
  }

  // cout << step << endl;

  rep(i, 0, n) {
    if (v[i] > step) cout << s[i];
  }
}
