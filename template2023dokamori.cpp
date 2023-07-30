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

#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

template <class T, size_t n, size_t idx = 0>
auto make_vec(const size_t (&d)[n], const T& init) noexcept {
  if constexpr (idx < n)
    return std::vector(d[idx], make_vec<T, n, idx + 1>(d, init));
  else
    return init;
}

template <class T, size_t n>
auto make_vec(const size_t (&d)[n]) noexcept {
  return make_vec(d, T{});
}

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  vector<int> a{1, 3, 2};

  sort(all(a));   // a.begin(), a.end() を省略
  sort(rall(a));  // a.rbegin(), a.rend() を省略

  int tmp;
  rep(i, n) { cin >> tmp; }
  rep(i, 1, n) { cin >> tmp; }
  rep(i, a.begin(), a.end()) { cin >> tmp; }

  // 2×2×2で全要素が1のvectorを作成
  auto a = make_vec<int>({2, 2, 2}, 1);

  // 2×2×2で全要素が0のvectorを作成
  auto b = make_vec<int>({2, 2, 2});

  // deque (=Double-Ended queue).
  // 先頭・末尾の、参照・追加・削除がO(1).
  // https://qiita.com/gnbrganchan/items/616f3701b1169e834565
  deque<int> dq;
  cout << dq.front() << dq.back();  // 表示
}
