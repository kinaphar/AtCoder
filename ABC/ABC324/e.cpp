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
  int n;
  cin >> n;

  string t;
  cin >> t;

  string t_rev = t;
  reverse(t_rev.begin(), t_rev.end());

  vector<string> v(n);
  vector<ll> f(n);  // forward.
  vector<ll> b(n);  // backward.
  multiset<ll> ms;  // backward入れ.

  rep(i, n) {
    cin >> v[i];

    int count = 0;
    rep(j, v[i].length()) {
      if (v[i][j] == t[count]) count++;
    }
    f[i] = count;

    count = 0;
    reverse(v[i].begin(), v[i].end());
    rep(j, v[i].length()) {
      if (v[i][j] == t_rev[count]) count++;
    }
    b[i] = count;
    ms.insert(count);
  }

  ll ans = 0;
  ll tmp;
  rep(i, n) {
    tmp = t.length() - f[i];
    ans += n - distance(ms.begin(), ms.lower_bound(tmp));

    // cout << distance(ms.lower_bound(f[i]), ms.end()) << endl;

    // if (b[i] >= tmp) ans--;
  }

  cout << ans << endl;
}
