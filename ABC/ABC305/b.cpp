#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  char p, q;
  cin >> p >> q;

  int ans = 0;

  char tmp;
  if (p > q) {
    tmp = p;
    p = q;
    q = tmp;
  }

  // cout << p << q;

  if (p - 'A' < 1 && q - 'A' > 0) ans += 3;
  if (p - 'A' < 2 && q - 'A' > 1) ans += 1;
  if (p - 'A' < 3 && q - 'A' > 2) ans += 4;
  if (p - 'A' < 4 && q - 'A' > 3) ans += 1;
  if (p - 'A' < 5 && q - 'A' > 4) ans += 5;
  if (p - 'A' < 6 && q - 'A' > 5) ans += 9;

  cout << ans;
}
