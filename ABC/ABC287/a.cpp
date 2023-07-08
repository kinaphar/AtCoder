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

  int f = 0;
  int a = 0;

  string tmp;

  rep(i, 0, n) {
    cin >> tmp;
    if (tmp == "For") {
      f++;
    }
    if (tmp == "Against") {
      a++;
    }
  }

  if (f > a) {
    cout << "Yes";
  }
  if (a > f) {
    cout << "No";
  }
}
