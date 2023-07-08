#include <bits/stdc++.h>
using namespace std;

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  std::ifstream in("016_input.txt");
  std::cin.rdbuf(in.rdbuf());
  // ...

  int n, a, b, c;
  cin >> n;
  cin >> a >> b >> c;

  int cm;
  int bm;
  // int rest;

  /*
  cm = n/c;
  for (int i=cm; i>=0; i--) {
    if (n-c*cm >= b) {
      bm = (n-c*cm)/b;
      for (int j=bm; j>=0; j--){
        if ((n-c*cm-b*bm)%a == 0) {
          // cout << cm + bm + (n-c*cm-b*bm)/a << endl;
          cout << "ココまで来てる？" << endl;
          break;
        }
      }
    }
  }
  */

  cm = n / c;
  for (int i = cm; i >= 0; i--) {
    // cout << "ココまで来てる？0" << endl;
    if (n - c * i >= b) {
      // cout << "ココまで来てる？1" << endl;
      bm = (n - c * i) / b;
      for (int j = bm; j >= 0; j--) {
        // cout << "ココまで来てる？2" << endl;
        if ((n - c * i - b * j) % a == 0) {
          cout << i + j + (n - c * i - b * j) / a << endl;
          // cout << "ココまで来てる？3" << endl;
          return 0;
        }
      }
    }
  }
}
