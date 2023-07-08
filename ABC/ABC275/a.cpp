#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;

  int ans = 0;
  int ansi = 1;
  int h;

  rep(i, 0, n) {
    cin >> h;
    if (h > ans) {
      ans = h;
      ansi = i + 1;
    }
  }

  cout << ansi;
}
