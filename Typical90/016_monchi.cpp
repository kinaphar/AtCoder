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

  int crest, brest;
  int ans = n / c;

  int monchi;

  for (int i = 0; i <= n / a; i++) {
    monchi = i >= b;
    cout << "「i >= b」" << i >= b << endl;
    crest = n - c * i >= b;
    cout << "もんち: " << crest << endl;
    if (crest >= b) {
      for (int j = 0; j <= crest / b; j++) {
        brest = crest - b * j;
        if (brest % a == 0) {
          ans = min(ans, i + j + brest / a);
        }
      }
    }
  }

  cout << ans << endl;
}
