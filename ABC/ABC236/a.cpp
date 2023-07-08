#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ...

  string S;
  int a, b;
  cin >> S >> a >> b;

  string A = S.substr(a - 1, 1);
  string B = S.substr(b - 1, 1);
  S.replace(b - 1, 1, A);
  S.replace(a - 1, 1, B);

  cout << S;
}
