#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  ll a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  ll moda = 998244353;

  a %= moda;
  b %= moda;
  c %= moda;
  d %= moda;
  e %= moda;
  f %= moda;

  a = a * b % moda;
  a = a * c % moda;

  d = d * e % moda;
  d = d * f % moda;

  cout << (a + moda - d) % moda << endl;
}
