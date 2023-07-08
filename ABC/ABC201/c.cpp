#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  string s;
  cin >> s;

  int ans = 0;

  int tmp = 0;

  rep(i, 0, 10000) {
    vector<int> v(10);
    tmp = i;
    rep(j, 0, 4) {
      v[tmp % 10]++;
      tmp /= 10;
    }

    bool flag = true;
    rep(k, 0, 10) {
      if (s[k] == 'o' && v[k] == 0) flag = false;
      if (s[k] == 'x' && v[k] != 0) flag = false;
    }

    if (flag) ans++;
  }
  cout << ans;
}
