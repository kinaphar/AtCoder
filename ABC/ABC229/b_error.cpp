#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  //   std::ifstream in("input.txt");
  //   std::cin.rdbuf(in.rdbuf());
  // ...

  string A;
  string B;
  cin >> A >> B;

  string ans = "Easy";

  rep(i, 0, 18) {
    if (int(A[i] - '0') >= 0 && int(A[i] - '0') <= 9) {
      if (int(A[i] - '0') + int(B[i] - '0') >= 10) {
        ans = "Hard";
        cout << i << ": " << int(A[i] - '0') + int(B[i] - '0') << endl;

        cout << A << ": " << int(A[i] - '0') << endl;
        cout << B << ": " << int(B[i] - '0') << endl;
      }
    }
  }
  cout << ans << endl;
}
