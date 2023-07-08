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

  vector<string> v(11);

  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
  int flag = 0;

  rep(i, 0, 10) { cin >> v[i]; }
  rep(i, 0, 10) {
    rep(j, 0, 10) {
      if (v[i][j] == '#') {
        a = i;
        c = j;
        flag = 1;
        break;
      }
    }
    if (flag == 1) {
      break;
    }
  }
  rep(i, 0, 10) {
    rep(j, 0, 10) {
      if (v[i][j] == '#') {
        b = i;
        d = j;
      }
    }
  }

  if (b == 11) {
    b = 10;
  }
  if (d == 11) {
    d == 10;
  }

  cout << a + 1 << " " << b + 1 << endl;
  cout << c + 1 << " " << d + 1 << endl;
}
