#include <bits/stdc++.h>
using namespace std;

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
  // 2×2×2で全要素が1のvectorを作成
  auto a = make_vec<int>({2, 2, 2}, 1);

  // 2×2×2で全要素が0のvectorを作成
  auto b = make_vec<int>({2, 2, 2});
}