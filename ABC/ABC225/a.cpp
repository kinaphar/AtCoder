#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  // std::ifstream in("a-input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ...

  string word;
  cin >> word;

  string a, b, c;
  int count = 3;

  a = word.at(0);
  b = word.at(1);
  if (b == a) {
    count -= 1;
  }
  c = word.at(2);
  if (c == b || c == a) {
    count -= 1;
  }

  int ans;
  if (count == 1) {
    ans = 1;
  } else if (count == 2) {
    ans = 3;
  } else {
    ans = 6;
  }

  cout << ans << endl;
}
