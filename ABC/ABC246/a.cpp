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

  int x1, y1, x2, y2, x3, y3;
  int xans, yans;

  cin >> x1 >> y1;
  cin >> x2 >> y2;
  cin >> x3 >> y3;

  // cout << x1 << y1 << endl;
  // cout << x2 << y2 << endl;
  // cout << x3 << y3 << endl;

  if (x1 == x2) {
    xans = x3;
  } else if (x2 == x3) {
    xans = x1;
  } else {
    xans = x2;
  }

  if (y1 == y2) {
    yans = y3;
  } else if (y2 == y3) {
    yans = y1;
  } else {
    yans = y2;
  }

  cout << xans << " " << yans << endl;
}
