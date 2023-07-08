#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int m;
  cin >> m;

  vector<vector<int>> move;

  double tmp;
  double sqrtTmp;
  int i = 0;
  int j;
  while (i * i * 2 < m * m) {
    tmp = m * m - i * i;
    sqrtTmp = sqrt(tmp);
    j = sqrtTmp;

    if (i * i + j * j == m * m) {
      move.push_back({i, j});
      move.push_back({i, -j});
      move.push_back({-i, j});
      move.push_back({-i, -j});
      move.push_back({j, i});
      move.push_back({j, -i});
      move.push_back({-j, i});
      move.push_back({-j, -i});
    }

    i++;
  }

  rep(i, 0, move.size()) { cout << move[i][0] << " " << move[i][1] << endl; }
}
