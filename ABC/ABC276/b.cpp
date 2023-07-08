#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, m;
  cin >> n >> m;

  vector<set<int>> v(n + 1);

  int a, b;
  rep(i, 0, m) {
    cin >> a >> b;
    v[a].insert(b);
    v[b].insert(a);
  }

  rep(i, 1, n + 1) {
    cout << v[i].size();
    for (auto itr = v[i].begin(); itr != v[i].end(); ++itr) {
      cout << " " << *itr;
    }
    cout << endl;
  }
}
