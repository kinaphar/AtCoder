#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int N, Q;
  cin >> N >> Q;

  unordered_multimap<int, vector<int>> mmdata;

  int A;
  rep(i, 0, N) {
    cin >> A;
    mmdata.emplace(A, i + 1);
  }
  int X, K, C;
  rep(j, 0, Q) {
    cin >> X >> K;
    C = mmdata.count(X);
    if (C < K) {
      cout << -1 << endl;
    } else {
      auto p = mmdata.equal_range(X);
      // vector<int> tmp;
      auto it = p.first;
      int K2 = C + 1 - K;
      rep(l, 1, K2) { ++it; }
      cout << (it->second) << endl;
    }
  }
}
