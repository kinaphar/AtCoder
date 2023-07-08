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
  cin >> n;
  vector<int> v(n);
  set<int> s{0};

  int sum = 0;

  rep(i, 0, n) {
    cin >> v[i];
    sum += v[i];
  }
  // cout << sum << endl;

  int max = sum / 2;

  int ans = 0;
  int c;
  vector<int> vtmp(0);

  rep(i, 0, n) {
    // cout << v[i] << "について" << endl;
    for (auto e : s) {
      c = e + v[i];
      if (c <= max) {
        vtmp.push_back(c);
      }
    }
    rep(j, 0, vtmp.size()) { s.insert(vtmp[j]); }
    vtmp.clear();
  }

  cout << sum - *s.rbegin() << endl;
}
