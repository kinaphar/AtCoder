#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  ll n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;

  ll ans = 2500000000000;

  ll Bcount = 0;
  ll Acount = 0;
  rep(i, 0, n) {
    Bcount = 0;
    rep(i, 0, n / 2) {
      if (s[i] != s[n - 1 - i]) {
        Bcount++;
      }
    }
    ans = min(ans, Acount * a + Bcount * b);
    // cout << s << " " << Acount << " " << Bcount << " " << endl;
    // cout << ans << endl;

    s += s[0];
    s.erase(0, 1);
    Acount++;
  }
  cout << ans;
}
