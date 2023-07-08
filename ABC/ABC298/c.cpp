#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, q, type, i, j;
  cin >> n;
  cin >> q;

  vector<multiset<int>> box(n + 1);
  vector<set<int>> num(200001);

  rep(k, 0, q) {
    cin >> type;
    switch (type) {
      case 1:
        cin >> i >> j;
        // cout << "case 1, i = " << i << ", j = " << j << endl;
        box[j].insert(i);
        num[i].insert(j);
        break;
      case 2:
        cin >> i;
        // cout << "case 2, i = " << i << endl;
        for (auto itr = box[i].begin(); itr != box[i].end(); ++itr) {
          if (itr != box[i].begin()) cout << " ";
          cout << *itr;
        }
        cout << endl;
        break;
      case 3:
        cin >> i;
        // cout << "case 3, i = " << i << endl;
        for (auto itr = num[i].begin(); itr != num[i].end(); ++itr) {
          if (itr != num[i].begin()) cout << " ";
          cout << *itr;
        }
        cout << endl;
      default:
        break;
    }
  }
}
