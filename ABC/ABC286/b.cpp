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

  rep(i, 0, n - 1) {
    cout << s[i];
    if (s[i] == 'n' && s[i + 1] == 'a') cout << 'y';
  }
  cout << s[n - 1];
}
