#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  ll n, tmp;
  cin >> n;

  vector<ll> v(n + 1);

  bool flag = true;
  repl(i, 0, n * 3) {
    cin >> tmp;
    v[tmp]++;
    if (v[tmp] == 2) {
      if (flag) {
        flag = false;
      } else {
        cout << " ";
      }
      cout << tmp;
    }
  }
}
