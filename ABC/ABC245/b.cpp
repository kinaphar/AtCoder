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
  set<int> a;
  int tmp;

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    a.insert(tmp);
  }

  for (int i = 0; i < 2001; i++) {
    if (a.count(i) == 0) {
      cout << i;
      break;
    }
  }
}
