#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, k;
  cin >> n >> k;
  int a[n];
  int b[n];

  int aok[n] = {0};
  int bok[n] = {0};

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    aok[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    bok[i] = 0;
  }

  aok[0] = 1;
  bok[0] = 1;

  for (int i = 1; i < n; i++) {
    if (aok[i - 1] == 1) {
      if (abs(a[i] - a[i - 1]) <= k) {
        aok[i] = 1;
      }
      if (abs(b[i] - a[i - 1]) <= k) {
        bok[i] = 1;
      }
    }
    if (bok[i - 1] == 1) {
      if (abs(a[i] - b[i - 1]) <= k) {
        aok[i] = 1;
      }
      if (abs(b[i] - b[i - 1]) <= k) {
        bok[i] = 1;
      }
    }
    // cout << "a[" << i << "] = " << a[i] << ", b[" << i << "] = " << b[i]
    //      << endl;
    // cout << "aok[" << i << "] = " << aok[i] << ", bok[" << i << "] = " <<
    // bok[i]
    //      << endl;
  }

  if (aok[n - 1] != 1) {
    if (bok[n - 1] != 1) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  } else {
    cout << "Yes" << endl;
  }
}
