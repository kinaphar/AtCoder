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
  int m, ic;
  for (int i = 1; i < pow(2, n); i++) {
    m = 1;
    ic = i;
    while (ic % 2 == 0) {
      ic /= 2;
      m++;
    }
    cout << m << " ";
  }
}
