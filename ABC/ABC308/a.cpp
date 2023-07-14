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
  bool ng = false;
  int s[8];
  rep(i, 8) {
    cin >> s[i];
    if (i != 0) {
      if (!(s[i - 1] <= s[i])) ng = true;
    }
    if (!(100 <= s[i] && s[i] <= 675)) ng = true;
    if (s[i] % 25 != 0) ng = true;
    // cout << ng << endl;
  }

  if (ng) {
    cout << "No";
  } else {
    cout << "Yes";
  }
}
