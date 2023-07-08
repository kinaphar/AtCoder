#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  // cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ----------

  int n;
  cin >> n;

  int e1 = -1;
  int e2 = -1;
  int o1 = -1;
  int o2 = -1;

  int tmp;
  rep(i, 0, n) {
    cin >> tmp;
    if (tmp % 2 == 0) {
      if (e1 < tmp) {
        e2 = e1;
        e1 = tmp;
      } else {
        if (e2 < tmp) {
          e2 = tmp;
        }
      }
    }
    if (tmp % 2 == 1) {
      if (o1 < tmp) {
        o2 = o1;
        o1 = tmp;
      } else {
        if (o2 < tmp) {
          o2 = tmp;
        }
      }
    }
  }

  if (e2 == -1 && o2 == -1) {
    cout << -1 << endl;
  } else {
    cout << max(o1 + o2, e1 + e2);
  }
}
