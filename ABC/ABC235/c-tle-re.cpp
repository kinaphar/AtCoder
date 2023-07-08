#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int N, Q;
  cin >> N >> Q;

  multimap<int, int> mmdata;

  int A;
  rep(i, 0, N) {
    cin >> A;
    mmdata.emplace(A, i + 1);
  }
  int X, K;
  rep(j, 0, Q) {
    cin >> X >> K;
    if (mmdata.count(X) < K) {
      cout << -1 << endl;
    } else {
      auto p = mmdata.equal_range(X);
      // vector<int> tmp;
      auto it = p.first;
      rep(l, 1, K) { ++it; }
      cout << (it->second) << endl;
    }
  }
}
