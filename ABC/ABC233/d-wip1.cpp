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
  ll k, a;
  cin >> n >> k;

  map<ll, ll> m;
  ll sum = 0;
  ll ans = 0;

  // m[0]++;

  vector<ll> sum(n + 1);

  rep(i, 0, n) {
    cin >> a;
    // sum += a;
    sum[i + 1] = sum[i] + a;
    // cout << sum << " " << m[sum] << ", ";
    // if (a == k) ans++; // 隣接するsumの差としてカウントできてそう.
  }

  // for (const auto& [key, value] : m) {
  //   if (m.find(key + k) != m.end()) {
  //     ans += m[key] * m[key + k];
  //   }
  // }

  rep

          // ans += m[k];

          cout
      << ans;
}
