#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  ll n;
  cin >> n;

  ll a[n];
  set<ll> b;

  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n);

  rep(i, 0, n) { cout << a[i] << " "; }
}
