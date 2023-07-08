#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  // std::ifstream in("c-input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ...

  int n, m;
  cin >> n >> m;

  int flag = 1;

  int arr[m];
  int init;

  for (int j = 0; j < m; j++) {
    cin >> arr[j];
    if (j == 0) {
      init = arr[0];
      // cout << "CP1 init=" << init << endl;
    }
    if (arr[j] != init + j || (arr[j] - 1) / 7 != (init - 1) / 7) {
      // cout << "CP2" << endl;
      flag = 0;
    }
  }

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[j];
      if (arr[j] != init + i * 7 + j ||
          (arr[j] - 1) / 7 != (init - 1) / 7 + i) {
        // cout << "CP3" << endl;
        flag = 0;
      }
    }
  }

  if (flag == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
