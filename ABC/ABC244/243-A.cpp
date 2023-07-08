#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  // cin の入力元が 'input.txt' になる
  std::ifstream in("input.txt");
  std::cin.rdbuf(in.rdbuf());
  // ----------

  int V, C, A, B;
  cin >> V >> A >> B >> C;

  V = V % (A + B + C);

  V -= A;
  if (V < 0) {
    cout << "F";
  }
  V -= B;
  if (V < 0) {
    cout << "M";
    // V -= C;
  } else {
    cout << "T";
  }
}
