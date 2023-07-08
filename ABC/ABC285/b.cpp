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
  string s;
  cin >> n;
  cin >> s;

  int tmp;

  rep(i, 1, n) {
    tmp = 0;
    rep(l, 0, n - i + 1) {
      tmp = l;
      if (s[l] == s[l + i]) {
        break;
      }
    }
    cout << tmp << endl;
  }
}
