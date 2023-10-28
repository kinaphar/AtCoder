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
  int n, m, tmp, now;
  int ans = 0;

  cin >> n >> m;

  multiset<int> a_st;
  queue<int> q;
  rep(i, n) {
    cin >> tmp;
    a_st.insert(tmp);
  }

  // cout << "デバッグ: set size =" << a_st.size() << endl;

  for (auto ite = a_st.begin(); ite != a_st.end(); ite++) {
    q.push(*ite);
    while (q.size() > 0) {
      if (q.front() <= *ite - m) {
        q.pop();
      } else {
        break;
      }
    }
    now = q.size();
    ans = max(ans, now);
  }
  cout << ans << endl;
}
