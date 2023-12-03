
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
  cin >> n >> q;

  vector<int> a(n + 1);
  vector<int> count(n + 1);
  set<int> s;

  rep(i, 1, n + 1) {
    cin >> a[i];
    if (a[i] <= n) {
      count[a[i]]++;
      s.insert(a[i]);
    }
  }

  int i, x;
  int memory = 0;
  rep(j, q) {
    cin >> i >> x;
    if (a[i] <= n) {
      count[a[i]]--;
      if (count[a[i]] == 0) s.erase(a[i]);
    }
    a[i] = x;
    if (a[i] <= n) {
      count[a[i]]++;
      s.insert(a[i]);
    }

    rep(k, n + 1) {
      if (s.count(k) == 0) {
        cout << k << endl;
        memory = k;
        break;
      }
    }
  }
}