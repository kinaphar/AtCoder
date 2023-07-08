#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, k, tmp;
  vector<int> v(n + 1);
  // set<int> st;

  cin >> n >> k;

  // cout << "0 " << st.count(0) << endl;

  rep(i, 0, n) {
    cin >> tmp;
    v[tmp]++;
  }

  rep(i, 0, k) {
    // cout << i << " " << st.count(i) << endl;
    if (i != k - 1 && v[i] >= 1 && v[i + 1] <= n - k) {
      continue;
    } else {
      cout << i + 1;
      break;
    }
  }
}
