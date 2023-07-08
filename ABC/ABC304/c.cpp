#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, d;
  cin >> n >> d;

  vector<vector<int>> v(n, vector<int>(3));
  set<int> si;  // set infected.
  set<int> sr;  // set rest.

  rep(i, 0, n) {
    cin >> v[i][0] >> v[i][1];
    sr.insert(i);
  }

  v[0][2] = 1;
  si.insert(0);
  sr.erase(0);

  while (si.size() > 0) {
    auto itr = si.begin();
    int i = *itr;
    // cout << "i = " << i;
    for (auto x : sr) {
      if ((v[x][0] - v[i][0]) * (v[x][0] - v[i][0]) +
              (v[x][1] - v[i][1]) * (v[x][1] - v[i][1]) <=
          d * d) {
        si.insert(x);
        sr.erase(x);
        v[x][2] = 1;
        // cout << ", x = " << x;
      }
    }
    // cout << endl;
    si.erase(i);
  }

  rep(i, 0, n) {
    if (v[i][2] == 0) cout << "No" << endl;
    if (v[i][2] == 1) cout << "Yes" << endl;
  }
}
