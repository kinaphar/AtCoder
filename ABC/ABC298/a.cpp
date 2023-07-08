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

  int good = 0;
  int bad = 0;

  rep(i, 0, n) {
    if (s[i] == 'o') good++;
    if (s[i] == 'x') bad++;
  }

  if (good > 0 && bad == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
