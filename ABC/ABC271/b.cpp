#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, q;
  cin >> n >> q;

  vector<vector<int>> v(n);

  int l;
  int tmp;

  rep(i, 0, n) {
    cin >> l;
    rep(j, 0, l) {
      cin >> tmp;
      v[i].push_back(tmp);
    }
  }

  int s, t;
  rep(i, 0, q) {
    cin >> s >> t;
    cout << v[s - 1][t - 1] << endl;
  }
}
