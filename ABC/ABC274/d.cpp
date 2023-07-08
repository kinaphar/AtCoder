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

  int n, x, y;
  cin >> n >> x >> y;

  vector<vector<int>> h(n + 1, vector<int>(20001));
  vector<vector<int>> v(n + 1, vector<int>(20001));

  int a1;
  cin >> a1;
  h[1][a1 + 10000] = 1;

  v[1][10000] = 1;

  int ai;

  rep(i, 2, n + 1) {
    cin >> ai;
    // cout << ai << endl;
    if (i % 2 == 1) {
      rep(j, 0, 20001) {
        if (h[i - 2][j] == 1) {
          // cout << j << endl;
          if (j + ai <= 20000) h[i][j + ai] = 1;
          // cout << j + ai << endl;
          if (j - ai >= 0) h[i][j - ai] = 1;

          // cout << j - ai << " " << h[i][j - ai] << endl;
        }
      }
    } else if (i == 2) {
      v[2][10000 + ai] = 1;
      v[2][10000 - ai] = 1;
    } else {
      rep(j, 0, 20001) {
        if (v[i - 2][j] == 1) {
          if (j + ai <= 20000) v[i][j + ai] = 1;
          if (j - ai >= 0) v[i][j - ai] = 1;
        }
      }
    }
  }

  if (n % 2 == 0) {
    if (h[n - 1][x + 10000] == 1 && v[n][y + 10000] == 1) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  } else {
    if (h[n][x + 10000] == 1 && v[n - 1][y + 10000] == 1) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}
