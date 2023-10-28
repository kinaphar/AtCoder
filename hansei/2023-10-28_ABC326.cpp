
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
  int x, y;
  cin >> x >> y;

  // ここORにして2回提出してWA食らった.
  // if (-3 <= y - x || y - x <= 2) {

  if (-3 <= y - x && y - x <= 2) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
