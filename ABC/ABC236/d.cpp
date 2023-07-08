#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int pairing(int n) {
  if (n == 0) return 0;  // 0! = 1
  int m;
  pairing(n - 1);

  m += 1;
}

int main() {
  int N, temp;
  cin >> N;
  vector<vector<int>> Happy(N * 2);

  rep(i, 1, N * 2) {
    rep(k, 0, i + 1) {
      Happy[i].push_back(0);
      cout << k << ". ";  //格納確認用
    }
    rep(j, i + 1, N * 2 + 1) {
      cin >> temp;
      Happy[i].push_back(temp);
      cout << i << "," << j << "=" << Happy[i][j] << " ";  //格納確認用
    }
    cout << endl;  //格納確認用
  }

  // vector<int> rep(i, 1, N * 2) {}
}
