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

  int n, a, b;
  cin >> n >> a >> b;

  int p = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < a; j++) {
      p = i % 2;
      for (int k = 0; k < n; k++) {
        for (int l = 0; l < b; l++) {
          if (p % 2 == 0) cout << ".";
          if (p % 2 == 1) cout << "#";
        }
        p++;
      }
      cout << endl;
    }
  }
}
