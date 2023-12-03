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

  vector<int> a(n + 1);
  vector<int> sorted(n + 1);
  vector<int> memo(n + 1);

  rep(i, 1, n + 1) {
    cin >> a[i];
    cin >> sorted[i];
  }
  sort(sorted[i].begin(), sorted[i].end());

  rep(i, 1, n + 1) { memo[i] = memo[i - 1] + sorted[i]; }

  rep(i, 1, n + 1) { a[i] }
}
