#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  ll a, b, k;
  cin >> a >> b >> k;

  ll ans = 0;
  while (a < b) {
    a *= k;
    ans++;
  }

  cout << ans;
}
