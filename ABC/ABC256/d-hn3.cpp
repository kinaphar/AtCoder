#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  ll n, l, r;
  bool nmb[200001];
  rep(i, 200001) { nmb[i] = false; }
  cin >> n;
  rep(i, n) {
    cin >> l >> r;
    for (ll j = l; j < r; j++) {
      nmb[j] = true;
    }
  }
  bool f = false;
  for (ll i = 1; i < 200001; i++) {
    if (f == false) {
      if (nmb[i] == true) {
        cout << i << " ";
        f = true;
      }
    } else {
      if (nmb[i] == false) {
        cout << i << endl;
        f = false;
      }
    }
  }
}