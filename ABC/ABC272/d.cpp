#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int iTmp, jTmp;

int search(vector<vector<int>> &board, vector<vector<int>> move, int n, int i,
           int j, int s) {
  // cout << "Entered: i=" << i << ", j=" << j << ", s=" << s << endl;

  board[i][j] = s;

  rep(i, 0, move.size()) {
    iTmp = i + move[i][0];
    jTmp = j + move[i][1];
    if (iTmp < 0 || n <= iTmp || jTmp < 0 || n <= jTmp) {
    } else if (board[iTmp][jTmp] == -1) {
      board[iTmp][jTmp] = s + 1;
    }
  }
  rep(i, 0, move.size()) {
    iTmp = i + move[i][0];
    jTmp = j + move[i][1];
    if (iTmp < 0 || n <= iTmp || jTmp < 0 || n <= jTmp) {
    } else if (board[iTmp][jTmp] == s + 1) {
      search(board, move, n, iTmp, jTmp, s + 1);
    }
  }
  return 0;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> board(n, vector<int>(n, -1));

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

  search(board, move, n, 0, 0, 0);

  rep(i, 0, n) {
    rep(j, 0, n) {
      cout << board[i][j];
      if (j != n - 1) {
        cout << " ";
      }
    }
    cout << endl;
  }
}
