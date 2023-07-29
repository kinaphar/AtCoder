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
  int n, m;
  cin >> n >> m;

  vector<int> a(n);
  vector<int> b(m);

  rep(i, n) { cin >> a[i]; }
  rep(i, m) { cin >> b[i]; }

  sort(a.begin(), a.end());    // 90, 110, 120.
  sort(b.rbegin(), b.rend());  // 10000, 120, 100, 80.

  int x = min(n, m);
  rep(i, x) {
    if (a[i] > b[i]) {
      if (i == 0) {
        cout << b[i] + 1 << endl;
        return 0;
      } else {
        if (b[i] >= a[i - 1]) {
          cout << b[i] + 1 << endl;
          return 0;
        } else {
          cout << a[i - 1] << endl;
          return 0;
        }
      }
    }
  }
  if (n >= m) {
    cout << a[x - 1] << endl;
    return 0;
  } else {
    cout << b[x] + 1 << endl;
    return 0;
  }
}
