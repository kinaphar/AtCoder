#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int N, Q;
  cin >> N >> Q;

  unordered_map<int, vector<int>> mdata;

  int A;
  rep(i, 0, N) {
    cin >> A;
    if (mdata.count(A) = 0) {
      vector<int> tmp;
      tmp.push_back(i);
      mdata.insert(A, tmp);
    } else {
      mdata.find(A).second.push_back(i);
    }
    mdata.emplace(A, i + 1);
  }
  int X, K;
  rep(j, 0, Q) {
    cin >> X >> K;
    if (mdata.count(X) < K) {
      cout << -1 << endl;
    } else {
      auto p = mmdata.equal_range(X);
      vector<int> tmp;
      for (auto it = p.first; it != p.second; ++it) {
        tmp.push_back(it->second);
      }
      cout << tmp.at(K - 1) << endl;
    }
  }
}
