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
  int n, f, s;
  vector<vector<int>> v(300001, vector<int>(2));

  cin >> n;
  rep(i, n) {
    cin >> f;            // 味.
    cin >> s;            // おいしさ.

    if (v[f][0] == 0) {  // v[f][0] に大きい方を入れる.
      v[f][0] = s;
    } else {
      if (v[f][0] < s) {
        v[f][1] = v[f][0];  // 中身が0でもOK.
        v[f][0] = s;
      } else if (v[f][1] < s) {
        v[f][1] = s;
      }
    }
  }

  int max1 = 0;
  int max2 = 0;
  rep(i, 1, 300001) {
    if (v[i][0] > max1) {
      max2 = max1;
      max1 = v[i][0];
      // cout << max1 << ", " << max2 << "(" << v[i][0] << ", " << v[i][1] <<
      // ")"
      //      << endl;
    } else if (v[i][0] > max2) {
      max2 = v[i][0];
      // cout << max1 << ", " << max2 << "(" << v[i][0] << ", " << v[i][1] <<
      // ")"
      //      << endl;
    }

    if (v[i][1] / 2 > max2) {
      max2 = v[i][1] / 2;
      // cout << max1 << ", " << max2 << "(" << v[i][0] << ", " << v[i][1] <<
      // ")"
      //      << endl;
    }
  }

  cout << max1 + max2 << endl;
}
