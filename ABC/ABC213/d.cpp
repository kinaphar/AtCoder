#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, a, b;
  cin >> n;

  vector<int> visit(n + 1);
  vector<set<int>> con(n + 1);

  rep(i, 0, n) {
    cin >> a >> b;
    con[a].insert(b);
    con[b].insert(a);
  }

  bool flag = true;
  visit[1] = -1;
  int min;

  int p = 1;
  cout << 1 << " ";

  while (flag) {
    if (con[p].size() == 0) {
      if (visit[p] == -1) {
        flag = false;
        break;
      } else {
        p = visit[p];
        cout << p << " ";
      }
    } else {
      min = *begin(con[p]);
      if (visit[min] == 0) {
        con[p].erase(min);
        visit[min] = p;
        p = min;
        cout << p << " ";
      } else {
        con[p].erase(min);
      }
    }
  }
}
