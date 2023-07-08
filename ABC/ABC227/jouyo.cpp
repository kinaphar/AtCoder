#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
  int n = 0;
  int ans = 0;
  int kinaphar = 0;
  vector<int> wrong;

  rep(n, 1000000) {
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
    } else if (n % 1000 == 0) {
      cout << n << " ";
    }
  }
}
