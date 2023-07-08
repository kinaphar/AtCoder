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

  int h, w;
  cin >> h >> w;

  // vector<vector<int>> v()

  vector<int> ans(w);

  string tmp;

  rep(i, 0, h) {
    cin >> tmp;
    rep(j, 0, w) {
      if (tmp[j] == '#') {
        ans[j]++;
      }
    }
  }

  rep(j, 0, w) {
    if (j != 0) cout << " ";
    cout << ans[j];
  }
  // cout << ans;
}
