#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  ll arr[m + 1][n + 1];

  int dan = k - n + 1;  //合計10, 要素5なら 6

  for (int j = 0; j < dan; j++) {  // 1段目は定義
    arr[1][j] = j;
  }

  for (int i = 2; i <= n; i++) {  // 2段目以降あれば
    arr[i][0] = 0;
    for (int j = 1; j <= dan; j++) {
      arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j] + arr[1][j - 1];
      cout << arr[i][j] << endl;
    }
  }

  cout << arr[n][dan] % 998244353;
}
