#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;
ll n, k, x;
ll a[200005];
int main(void) {
  cin >> n >> k >> x;
  for (int i = 1; i <= n; i++) cin >> a[i];

  ll ans = 0;
  for (int i = 1; i <= n; i++) ans += a[i];

  ll m = 0;
  for (int i = 1; i <= n; i++) m += a[i] / x;
  m = min(m, k);
  ans -= m * x, k -= m;

  for (int i = 1; i <= n; i++) a[i] %= x;
  sort(a + 1, a + n + 1);

  for (int i = n; i >= 1; i--) {
    if (k == 0) break;
    ans -= a[i], k--;
  }

  cout << ans << endl;

  return 0;
}