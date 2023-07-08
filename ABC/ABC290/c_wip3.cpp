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
  // vector<int> v(n + 1);
  set<int> st;

  cin >> n >> k;

  rep(i, 0, n) {
    cin >> tmp;
    st.insert(tmp);
  }
  rep(i, 0, k) {
    if (st.count(i) == 0) {
      cout << i << endl;
      break;
    }
    if (i == k - 1) {
      cout << k << endl;
    }
  }
}