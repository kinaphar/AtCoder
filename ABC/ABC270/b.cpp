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

  int x, y, z;
  cin >> x >> y >> z;

  if (x * y < 0) {
    cout << abs(x) << endl;
  } else if (abs(x) < abs(y)) {
    cout << abs(x) << endl;
  } else if (z * y < 0) {  // x > y
    cout << abs(z) * 2 + abs(x);
  } else if (abs(z) < abs(y)) {
    cout << abs(x) << endl;
  } else {
    cout << -1 << endl;
  }
}
