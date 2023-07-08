#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  // std::ifstream in("b-input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ...

  int n;
  cin >> n;

  int a1, b1, a2, b2;
  cin >> a1 >> b1;  // i=1

  cin >> a2 >> b2;  // i=2

  int root, flag;
  if (a1 == a2 || a1 == b2) {
    root = a1;
    // cout << "root(a1)=" << root << endl;
    flag = 1;
  } else if (b1 == a2 || b1 == b2) {
    root = b1;
    // cout << "root(b1)=" << root << endl;
    flag = 1;
  } else {
    flag = 0;
  }

  int a, b, tmp1, tmp2;

  for (int i = 3; i <= n - 1; i++) {
    cin >> a >> b;

    // cout << "a=" << a << " b=" << b << endl;
    // cin >> tmp1 >> tmp2;
    // a = tmp1;
    // b = tmp2;
    if (a != root && b != root) {
      flag = 0;
      break;
    }
  }

  if (flag == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
