#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b, c;
  int k[3];

  cin >> n;
  cin >> k[0] >> k[1] >> k[2];
  sort(k, k + 3);
  a = k[0];  // 小さい
  b = k[1];  // 中
  c = k[2];  // 大きい

  int crest, brest;
  int ans = n / a;

  for (int i = 0; i <= n / c; i++) {
    crest = n - c * i;
    for (int j = 0; j <= crest / b; j++) {
      brest = crest - b * j;
      if (brest % a == 0) {
        ans = min(ans, i + j + brest / a);
      }
    }
  }
  cout << ans << endl;
}
