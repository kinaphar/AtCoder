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
  int n, q;
  string s;
  cin >> n >> q >> s;

  vector<int> v(n + 1);
  v[1] = 0;
  int now = 0;
  rep(i, 2, n + 1) {
    if (s[i - 1] == s[i - 2]) now++;
    v[i] = now;
  }

  // rep(i, 1, n + 1) { cout << v[i] << " "; }
  // cout << endl;

  int l, r;
  rep(i, q) {
    cin >> l >> r;
    // cout << v[l] << " " << v[r] << endl;
    cout << v[r] - v[l] << endl;
  }
}
