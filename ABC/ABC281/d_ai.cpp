#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n;
  vector<int> A(n);
  for (int i = 0; i < n; ++i) cin >> A.at(i);

  int K, D;
  cin >> K >> D;

  unordered_set<int> S;
  for (int i = 0; i < n; ++i) {
    int sum = 0;
    for (int j = 0; j < K && i + j < n; ++j) {
      sum += A.at(i + j);
      S.insert(sum);
    }
  }

  int ans = -1;
  for (int n : S) {
    if (n % D == 0) ans = max(ans, n);
  }

  cout << ans << endl;
}
