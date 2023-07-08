#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n;
  vector<int> a(n);

  int flag = 0;
  int ans = 0;

  rep(i, 0, n) cin >> a[n];
  rep(i, 1, n) {
    if (a[i] % a[0] != 0) {
      flag = -1;
      break;
    } else {
      a[i] /= a[0];
    }
  }

  rep(i, 1, n) {
    if (i % 2 == 0) {
      a[i] /= 2;
      ans++;
    }
    if (i % 3 == 0) {
      a[i] /= 3;
      ans++;
    }
    if (a[i] != 1) {
      flag = -1;
      break;
    }
  }
  if (flag == -1) {
    cout << flag;

  } else {
    cout << ans;
  }
}
