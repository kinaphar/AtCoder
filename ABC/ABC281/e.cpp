#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  ll n, m, k, s;
  cin >> n >> m >> k;
  vector<ll> v(n);

  repl(i, 0, n) { cin >> v[i]; }

  s = 0;
  //  i = 0のとき
  repl(i, 0, m) { s += v[i]; }
  cout << s;

  re
}
