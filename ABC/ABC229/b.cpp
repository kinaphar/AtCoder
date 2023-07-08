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

  ll A;
  ll B;
  cin >> A >> B;

  string ans = "Easy";

  rep(i, 0, 18) {
    if (A % 10 + B % 10 >= 10) {
      ans = "Hard";
    }
    A = A / 10;
    B = B / 10;
  }
  cout << ans << endl;
}
