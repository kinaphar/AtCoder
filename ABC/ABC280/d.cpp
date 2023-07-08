#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  map<ll, int> m;
  vector<ll> v;

  ll n;
  cin >> n;
  ll x = n;
  for (ll i = 2; n > 1; i++) {
    if (n % i == 0) {
      v.push_back(i);
      cout << i;
    }
    while (n % i == 0) {
      m[i]++;
      n /= i;
    }
  }

  int tmp, tmp2;
  ll ans = 0;
  for (int i = 0; i < v.size(); i++) {
    tmp = 0;
    tmp2 = tmp;
    while (m[v[i]] > 0) {
      tmp += v[i];
      while (tmp2 % i == 0) {
        tmp2 /= v[i];
        m[v[i]]--;
      }
    }
    if (ans < tmp) {
      ans = tmp;
    }
  }
  cout << ans;
  return 0;
}
