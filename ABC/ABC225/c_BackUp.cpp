#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  std::ifstream in("c-input.txt");
  std::cin.rdbuf(in.rdbuf());
  // ...

  int n, m;
  cin >> n >> m;

  int flag = 1;

  long long int arr[m];
  cin >> arr[0];
  long long int init = arr[0];

  for (int j = 1; j < m; j++) {
    cin >> arr[j];
    if (arr[j] != arr[0] + j) {
      // cout << "arr[j] = " << arr[j] << endl;
      flag = 0;
      // cout << "line 25" << endl;
    }
  }

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[j];
      if (arr[j] != init + i * 7 + j) {
        // cout << arr[j] + j << endl;
        // cout << init + i * 7 + j << endl;

        flag = 0;
        // cout << "line 34" << endl;
      }
    }
  }

  if (flag == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
