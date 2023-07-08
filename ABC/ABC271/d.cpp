#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, s;
  cin >> n >> s;
  vector<vector<string>> v(n + 1, vector<string>(s + 1));

  int a, b;
  cin >> a >> b;
  v[1][a] = "H";
  v[1][b] = "T";

  rep(i, 2, n + 1) {
    cin >> a >> b;
    rep(j, 1, s + 1) {
      if (v[i - 1][j] != "") {
        if (j + a <= s) v[i][j + a] = v[i - 1][j] + "H";
        if (j + b <= s) v[i][j + b] = v[i - 1][j] + "T";
      }
    }
  }

  if (v[n][s] == "") {
    cout << "No";
  } else {
    cout << "Yes" << endl;
    cout << v[n][s] << endl;
  }
}
