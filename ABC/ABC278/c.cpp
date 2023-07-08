#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, q;
  cin >> n >> q;

  int t, a, b;
  set<pair<int, int>> s;
  pair<int, int> p, p2;
  rep(i, 0, q) {
    cin >> t >> a >> b;
    p = make_pair(a, b);
    p2 = make_pair(b, a);
    switch (t) {
      case 1:
        s.insert(p);
        break;
      case 2:
        s.erase(p);
        break;
      case 3:
        if (s.find(p) != s.end() && s.find(p2) != s.end()) {
          cout << "Yes" << endl;
        } else {
          cout << "No" << endl;
        }
        break;
      default:
        break;
    }
  }
}
