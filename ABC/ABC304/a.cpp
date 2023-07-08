#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  vector<int> a(n);

  int min = 0;
  int minV = 2000000000;

  rep(i, 0, n) {
    cin >> s[i];
    cin >> a[i];
    if (a[i] < minV) {
      minV = a[i];
      min = i;
    }
  }

  rep(i, 0, n) {
    if (i != 0) cout << endl;
    cout << s[(i + min) % n];
  }
}
