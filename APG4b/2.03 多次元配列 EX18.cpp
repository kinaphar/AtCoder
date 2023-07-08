#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<char>> v(n, vector<char>(n, '-'));

  int win, lose;
  for (int i = 0; i < m; i++) {
    cin >> win >> lose;
    v[win - 1][lose - 1] = 'o';
    v[lose - 1][win - 1] = 'x';
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << v[i][j];
      if (j != n - 1) {
        cout << " ";
      }
    }
    cout << endl;
  }
}
