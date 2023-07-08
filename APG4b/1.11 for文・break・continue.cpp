#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  // 1.の出力
  x++;
  cout << x << endl;

  // ここにプログラムを追記
  x *= (a + b);
  cout << x << endl;

  x *= x;
  cout << x << endl;

  x--;
  cout << x << endl;
}
