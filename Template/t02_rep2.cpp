#include <bits/stdc++.h>
using namespace std;

#define OVERLOAD_REP(_1, _2, _3, name, ...) name
#define REP1(i, n) for (auto i = std::decay_t<decltype(n)>{}; (i) != (n); ++(i))
#define REP2(i, l, r) for (auto i = (l); (i) != (r); ++(i))
#define rep(...) OVERLOAD_REP(__VA_ARGS__, REP2, REP1)(__VA_ARGS__)

int main() {
  // 2引数にも3引数にも対応
  // [0, 5)
  rep(i, 5) { cout << i << '\n'; }
  // [1, 5)
  rep(i, 1, 5) { cout << i << '\n'; }

  vector<int> a{1, 2, 3};
  // イテレータも回せる
  rep(i, a.begin(), a.end()) { cout << *i << '\n'; }
}