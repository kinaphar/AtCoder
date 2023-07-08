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

  int digit = 0;
  while (n >= 1000) {
    n /= 10;
    digit++;
  }

  while (digit > 0) {
    n *= 10;
    digit--;
  }

  cout << n;
}
