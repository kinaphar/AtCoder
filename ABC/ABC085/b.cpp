#include <bits/stdc++.h>
using namespace std;

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

  sort(vec.begin(), vec.end());
  vec.erase(unique(vec.begin(), vec.end()), vec.end());
  cout << vec.size() << endl;
}
