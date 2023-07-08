#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  // std::ifstream in("b_input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ...
  int n;
  cin >> n;

  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  set<int> se;
  rep(i, 0, n) se.insert(vec[i]);
  int ans = se.size();
  cout << ans << endl;
}
