#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int a, b;
  cin >> a >> b;

  int c = b - 2 * a;
  if (c == 0 || c == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
