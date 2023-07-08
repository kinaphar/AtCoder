#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  // cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ----------

  string S, T;
  cin >> S;
  cin >> T;

  int si = 0;
  int flag = 0;

  rep(i, 0, T.length()) {
    if (T[i] == S[si]) {
      si++;
    } else {
      if (i <= 1) {
        flag = 1;
        break;
      }
      if (T[i] == T[i - 1] && T[i] == T[i - 2]) {
      } else {
        flag = 1;
        break;
      }
    }
  }

  if (flag == 0) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}
