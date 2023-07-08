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

  int n;
  cin >> n;
  double p = 1;
  double ans = 0;

  if (n >= 5) {
    p = pow(5.0 / 6.0, n - 4);
    ans += (1 - p) * 6.0;
  }
  if (n >= 3) {
    p = p * (4.0 / 6.0) * (4.0 / 6.0);
    ans += (1 - p) / 2.0 * 5.0;
    ans += (1 - p) / 2.0 * 6.0;
  }
  if (n >= 2) {
    p = p * 1.0 / 2.0;
    ans += (1.0 - p) / 3.0 * 4.0;
    ans += (1.0 - p) / 3.0 * 5.0;
    ans += (1.0 - p) / 3.0 * 6.0;
  }
  if (n >= 1) {
    ans += p * 3.5;
  }

  cout << ans;
}
