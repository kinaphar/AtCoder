#include <bits/stdc++.h>

#include <atcoder/modint>
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
  int n, m, other;
  cin >> n >> m;

  vector<string> v(n);
  rep(i, n) { cin >> v[i]; }

  vector<string> v2(m);
  rep(i, m) { cin >> v2[i]; }

  map<string, int> mp;
  int tmp;
  cin >> other;
  rep(i, m) {
    cin >> tmp;
    mp[v2[i]] = tmp;
  }

  int ans = 0;
  rep(i, n) {
    if (mp.count(v[i]) == 0) {
      ans += other;
    } else {
      ans += mp[v[i]];
    }
  }

  cout << ans << endl;
}
