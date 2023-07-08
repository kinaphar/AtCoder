#include <bits/stdc++.h>
using namespace std;

int main() {
  int b;
  cin >> b;
  const int a = b;
  // 3ビットのビット列をすべて列挙する
  for (int tmp = 0; tmp < (1 << a); tmp++) {
    bitset<a> s(tmp);
    // ビット列を出力
    cout << s << endl;
  }
}
