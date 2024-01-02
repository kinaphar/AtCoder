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
  int k, g, m;
  cin >> k >> g >> m;

  int glass = 0;
  int mug = 0;
  rep(i, k) {
    if (glass == g) {
      glass = 0;
      // cout << glass << " " << mug << ": glass = 0" << endl;
    } else if (mug == 0) {
      mug = m;
      // cout << glass << " " << mug << ": mug = m" << endl;
    } else {
      if (glass + mug >= g) {
        mug -= (g - glass);
        glass = g;
        // cout << glass << " " << mug << ": trans, enough" << endl;
      } else {
        glass += mug;
        mug = 0;
        // cout << glass << " " << mug << ": trans, shortage" << endl;
      }
    }
  }
  cout << glass << " " << mug << endl;
}
