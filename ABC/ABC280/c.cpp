#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  string s, t;
  cin >> s >> t;

  for (int i = 0; i < t.length(); i++) {
    if (s[i] != t[i]) {
      cout << i + 1;
      break;
    }
  }
}
