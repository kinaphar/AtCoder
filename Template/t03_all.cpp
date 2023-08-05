#include <bits/stdc++.h>
using namespace std;

// 汎用性向上のためstd::begin, std::endを使用
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)

int main() {
  vector<int> a{1, 3, 2};

  sort(all(a));   // a.begin(), a.end() を省略
  sort(rall(a));  // a.rbegin(), a.rend() を省略
}