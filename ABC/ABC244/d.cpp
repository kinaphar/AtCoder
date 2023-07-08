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

  char t[3];
  char a[3];
  cin >> t[0] >> t[1] >> t[2];
  cin >> a[0] >> a[1] >> a[2];
  char tmp;
  int judge = 0;

  if (t[1] == a[0]) {
    tmp = t[0];
    t[0] = t[1];
    t[1] = tmp;
    judge += 1;
  } else if (t[2] == a[0]) {
    tmp = t[0];
    t[0] = t[2];
    t[2] = tmp;
    judge += 3;
  }
  if (t[2] == a[1]) {
    tmp = t[1];
    t[1] = t[2];
    t[2] = tmp;
    judge += 1;
  }

  if (judge % 2 == 0) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}
