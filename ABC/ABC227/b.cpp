#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  // std::ifstream in("b-input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ...

  int n = 0;
  int b = 0;
  int guess = 0;
  int flag = 0;
  int ans = 0;
  // cout << ans << endl;

  cin >> n;
  rep(i, n) {
    flag = 0;
    cin >> guess;
    // cout << "i=" << i << ", guess=" << guess << endl;
    for (int a = 1; a < 1000 / 7; a++) {
      b = 1;
      while (4 * a * b + 3 * a + 3 * b <= guess) {
        if (4 * a * b + 3 * a + 3 * b == guess) {
          flag = 1;
          // cout << "a=" << a << ", b=" << b << endl;
          // cout << flag << endl;
          break;
        }
        b++;
      }
    }
    if (flag == 0) {
      ans += 1;
      // cout << "ans=" << ans << endl;
    }
  }

  cout << ans << endl;
}
