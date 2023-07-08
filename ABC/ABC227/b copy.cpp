#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  std::ifstream in("input.txt");
  std::cin.rdbuf(in.rdbuf());
  // ...

  int n, b, guess, ans, flag = 0;
  cout << ans << endl;
  vector<int> data;

  cin >> n;
  rep(i, n) {
    cin >> guess;
    flag = 0;
    for (int a = 1; a <= guess / 7; a++) {
      b = 1;
      while (4 * a * b + 3 * a + 3 * b) {
        if (4 * a * b + 3 * a + 3 * b == guess) {
          flag == 1;
          break;
        }
        b++;
      }
    }
    if (flag == 0) {
      ans++;
      cout << i << " " << ans << endl;
    }
  }

  cout << ans << endl;
}
