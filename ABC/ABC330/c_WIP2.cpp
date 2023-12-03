
#include <bits/stdc++.h>

// #include <atcoder/modint>
using namespace std;
typedef long long ll;
using Graph = vector<vector<int>>;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;

#define OVERLOAD_REP(_1, _2, _3, name, ...) name
#define REP1(i, n) for (auto i = std::decay_t<decltype(n)>{}; (i) != (n); ++(i))
#define REP2(i, l, r) for (auto i = (l); (i) != (r); ++(i))
#define rep(...) OVERLOAD_REP(__VA_ARGS__, REP2, REP1)(__VA_ARGS__)

int main() {
  ll d;
  cin >> d;

  // cout << sqrt(double(d)) << endl;

  ll d_sqrt = sqrt(double(d));
  // cout << d_sqrt;

  ll x, y;

  ll ans = 9223372036854775806;
  rep(x, d_sqrt + 1) {
    y = sqrt(double(d - x * x));
    ans = min(ans, abs(x * x + y * y - d));
    y++;
    ans = min(ans, abs(x * x + y * y - d));
    y++;
    ans = min(ans, abs(x * x + y * y - d));
    y -= 3;
    ans = min(ans, abs(x * x + y * y - d));
  }

  cout << ans << endl;
}
