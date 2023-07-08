#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n, w;
  cin >> n >> w;
  vector<pair<long long, long long>> v(n);  // 【ポイント】pair型を使う！
  for (auto &nx : v) {
    cin >> nx.first >> nx.second;
  }
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  long long res = 0;
  for (auto &nx : v) {
    res += nx.first * min(w, nx.second);
    w -= min(w, nx.second);
  }
  cout << res << '\n';
  return 0;
}
