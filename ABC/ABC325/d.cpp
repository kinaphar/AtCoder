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
  // set に大量に突っ込むとやばいか？

  int n;
  cin >> n;

  vector<int> t(n);
  vector<int> d(n);

  vector<pair<int, int>> s(n);  // start & ID
  vector<pair<int, int>> e(n);  // end & ID

  queue q;

  rep(i, n) {
    cin >> t[i] >> d[i];
    s[i] = make_pair(t[i], i);
    e[i] = make_pair(d[i], i);
  }

  sort(s.begin(), s.end());

  rep()
}
