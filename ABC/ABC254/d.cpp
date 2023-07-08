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

  int i = 1;
  int j = 1;
  ll ans = 0;

  while (i <= n) {  //平方数 i^2 (i<n) まで考える
    cout << "i=" << i << endl;
    j = i;
    ans--;
    while (i * i / j <= n && j > 0) {
      cout << "  j=" << j << endl;
      if ((i * i) % j == 0) {
        ans += 2;
        cout << "    ans=" << ans << endl;
      }
      j--;
    }
    i++;
  }

  cout << ans;
}
