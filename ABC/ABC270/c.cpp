#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int A[1 << 18], B[1 << 18];

const int INF = (1 << 29);
vector<vector<int>> G(1 << 28);
int dist[1 << 18];

vector<int> route(0);

int flag = 0;

int searchRoute(int node, int tg) {
  // cout << node << endl;

  if (node == tg || flag == 1) {
    route.push_back(node);
    flag = 1;
    return 1;
  }

  if (G[node].size() == 0) {
    return 0;
  }

  for (int to : G[node]) {
    if (searchRoute(to, tg) == 1) {
      route.push_back(node);
      return 1;
    }
  }
}

int main() {
  int N, X, Y;
  cin >> N >> X >> Y;

  cout << N << endl;

  for (int i = 1; i <= N; i++) {
    cin >> A[i] >> B[i];
    G[A[i]].push_back(B[i]);
    G[B[i]].push_back(A[i]);
  }

  if (searchRoute(X, Y) == 1) {
    rep(i, 0, route.size()) { cout << route[i] << " "; }
    cout << endl;
  }
}
