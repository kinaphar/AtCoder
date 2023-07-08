#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, m;
  cin >> n >> m;
  int a[n];
  int b[m];
  int c[n + m];
  for (int i = n; i >= 0; i--) {
    cin >> a[i];
    // cout << "a[" << i << "]=" << a[i] << endl;
  }
  for (int i = n + m; i >= 0; i--) {
    cin >> c[i];
    // cout << "c[" << i << "]=" << c[i] << endl;
  }

  // b の iの位 を求める
  for (int i = m; i >= 0; i--) {
    b[i] = c[i + n] / a[n];

    // cout << "c[" << i + n << "]=" << c[i + n] << " ";
    // cout << "a[" << n << "]=" << a[n] << " ";
    // cout << "b[" << i << "]=" << b[i] << endl;
    // 割り算の処理をすすめる
    for (int j = 1; j <= n; j++) {
      c[i + n - j] -= a[n - j] * b[i];
    }
  }

  for (int i = m; i >= 1; i--) {
    cout << b[i] << " ";
  }
  cout << b[0] << endl;

  return 0;
}
