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

  double x[6];
  double y[6];
  cin >> x[0], y[0];
  cin >> x[1], y[1];
  cin >> x[2], y[2];
  cin >> x[3], y[3];
  x[4] = x[0];
  y[4] = y[0];
  x[5] = x[1];
  y[5] = y[1];

  int flag = 1;
  double jx, jy, kx, ky;
  for (int i = 1; i < 5; i++) {
    jx = x[i] - x[i - 1];
    jy = y[i] - y[i - 1];
    kx = x[i + 1] - x[i];
    ky = y[i + 1] - y[i];

    if (jx == 0) {
      if (jy * kx >= 0) {
        flag = 0;
        cout << "case1";
      }
    } else if (kx == 0) {
      if (jy * kx >= 0) {
        flag = 0;
        cout << "case2";
      }
    } else if (kx * jx > 0) {
      if (jy * kx >= ky * jx) {
        flag = 0;
        cout << "case3";
      }
    } else if (kx * jx < 0) {
      if (jy * kx >= ky * jx) {
        flag = 0;
        cout << "case4";
      }
    }
  }

  // jy/jx >= ky/kx

  if (flag == 1) {
    cout << "Yes";
  }
  if (flag == 0) {
    cout << "No";
  }
}
