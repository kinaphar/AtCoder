#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, tmp;
  cin >> n;
  int k = n;
  vector<int> v(n + 1);

  rep(i, 1, n + 1) {
    cin >> tmp;
    if (v[i] == 0 && v[tmp] == 0) {
      v[tmp] = 1;
      k--;
      // cout << i << " " << tmp << " → " << k << endl;
    }
  }

  cout << k << endl;

  bool sp = false;
  rep(i, 1, n + 1) {
    if (v[i] == 0) {
      if (sp == true) {
        cout << " ";
      } else {
        sp = true;
      }

      cout << i;
    }
  }
  cout << endl;
}
