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
  int n, m;
  cin >> n >> m;

  vector<vector<int>> v(n + 1, vector<int>(n + 1));
  vector<vector<int>> data(m);

  int k, tmp;
  rep(i, 0, m) {
    cin >> k;
    rep(j, 0, k) {
      cin >> tmp;
      data[i].push_back(tmp);
    }
    for (auto j : data[i]) {
      for (auto l : data[i]) {
        v[j][l] = 1;
      }
    }
  }

  bool flag = true;
  rep(i, 1, n + 1) {
    rep(j, 1, n + 1) {
      if (v[i][j] == 0) flag = false;
    }
  }

  if (flag) cout << "Yes";
  if (!flag) cout << "No";
}
