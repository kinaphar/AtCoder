#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int a, b;
  cin >> a >> b;

  int ans = b * 10000 / a;
  if (ans % 10 >= 5) {
    ans += 10;
  }
  // ans/=10;

  cout << ans / 10000 << "." << (ans / 1000) % 10 << (ans / 100) % 10
       << (ans / 10) % 10;
}
