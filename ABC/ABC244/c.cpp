#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main(void) {
  // cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ----------

  int n;
  int t;
  cin >> n;
  cout << n + 1 << endl << flush;

  for (int i = 0; i < n; i++) {
    cin >> t;
    cout << 2 * n - t + 2 << endl << flush;
  }
  cin >> t;
  cout << endl << flush;
}
