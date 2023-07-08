#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  // cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ----------

  int a, b, c, d;
  cin >> a >> b >> c >> d;

  string ans;
  if (a == c) {
    if (b <= d) {
      ans = "Takahashi";
    } else {
      ans = "Aoki";
    }
  } else if (a < c) {
    ans = "Takahashi";
  } else {
    ans = "Aoki";
  }

  cout << ans;
}
