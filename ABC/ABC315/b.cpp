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
  int m;
  int sum = 0;
  vector<int> d(101);

  cin >> m;

  rep(i, 1, m + 1) {
    cin >> d[i];
    sum += d[i];
  }

  sum /= 2;
  sum++;

  rep(i, 1, m + 1) {
    if (d[i] >= sum) {
      cout << i << " " << sum << endl;
      break;
    } else {
      sum -= d[i];
    }
  }
}
