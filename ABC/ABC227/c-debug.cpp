#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  // std::ifstream in("c-input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ...

  int n = 0;
  int ans = 0;
  int kinaphar = 0;
  vector<int> wrong;

  for (int i = 3375; i <= 3375; i++) {
    ans = 0;
    for (int a = 1; a * a * a <= n; a++) {
      for (int b = a; a * b * b <= n; b++) {
        ans += n / a / b - b + 1;
      }
    }

    kinaphar = 0;
    for (int a = 1; a <= cbrt(n); a++) {
      for (int b = a; b <= sqrt(n / a); b++) {
        kinaphar += n / a / b - b + 1;
      }
    }

    if (kinaphar != ans) {
      wrong.push_back(n);
    } else if (true) {
      cout << n << " ";
    }
  }

  for (auto e : wrong) {
    cout << e << endl;
  }
  if (wrong.size() == 0) {
    cout << "no wrong" << endl;
  }
}
