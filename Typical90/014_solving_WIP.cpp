#include <bits/stdc++.h>
using namespace std;

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  std::ifstream in("014_input.txt");
  std::cin.rdbuf(in.rdbuf());
  // ...

  int n;
  cin >> n;

  int a[n];
  int b[n];

  // cin >> a[n];
  // cin >> b[n];

  for (int i=0;i<n;i++)
  {
    cin >> a[i];
  }

  for (int i=0;i<n;i++)
  {
    cin >> b[i];
  }

  sort(a, a + n);
  sort(b, b + n);

  int inc = 0;

  for (int i=0; i<n; i++)
  {
    inc += abs(a[i] - b[i]);
  }

    for (int i=0; i<n; i++)
  {
    cout << a[i] << " ";
  }

  cout << endl;

    for (int i=0; i<n; i++)
  {
    cout << b[i] << " ";
  }
  cout << endl;

  cout << inc << endl;
// 小学生を全員殺せば「不満」な小学生がいなくなる
// 不満度の和が0になるので最小

}
