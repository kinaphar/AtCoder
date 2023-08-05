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
  // 二分探索アルゴリズムを一般化 〜 めぐる式二分探索法のススメ 〜 - Qiita
  // https://qiita.com/drken/items/97e37dd6143e33a64c8c
  int n;
  cin >> n;

  string s;
  cin >> s;

  vector<int> a{1, 3, 2};

  int tmp;
  rep(i, n) { cin >> tmp; }
  rep(i, 1, n) { cin >> tmp; }
  rep(i, a.begin(), a.end()) { cin >> tmp; }

  cout << "" << endl;
}
