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

  string s, t;
  cin >> s;
  cin >> t;

  int flag = 0;
  if (s.size() <= t.size()) {
    rep(i, 0, s.size()) {
      if (s[i] != t[i]) {
        flag = 1;
      }
    }
  } else {
    flag = 1;
  }

  if (flag == 0) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}
