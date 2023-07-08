#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int N, X = 0;
  cin >> N;
  vector<int> vec(N);

  cin >> vec[0];
  rep(i, 1, N) {
    cin >> vec[i];
    if (X == 0) {
      if (vec[i] < vec[i - 1]) {
        X = vec[i - 1];
      }
    }
    // cout << "i=" << i << ", X=" << X << endl;
  }
  if (X == 0) {
    X = vec[N - 1];
  }

  rep(i, 0, N) {
    if (vec[i] != X) {
      cout << vec[i] << " ";
    }
  }
  cout << endl;
}
