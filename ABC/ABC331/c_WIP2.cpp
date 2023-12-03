#include <bits/stdc++.h>

// #include <atcoder/modint>
using namespace std;
typedef long long ll;
using Graph = vector<vector<int>>;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;

#define OVERLOAD_REP(_1, _2, _3, name, ...) name
#define REP1(i, n) for (auto i = std::decay_t<decltype(n)>{}; (i) != (n); ++(i))
#define REP2(i, l, r) for (auto i = (l); (i) != (r); ++(i))
#define rep(...) OVERLOAD_REP(__VA_ARGS__, REP2, REP1)(__VA_ARGS__)

int main() {
  int n;
  cin >> n;

  vector<int> a(n + 1);
  vector<int> s(n + 1);
  map<int, ll> memo;

  rep(i, 1, n + 1) { cin >> a[i]; }

  rep(i, 1, n + 1) { s[i] = a[i]; }
  sort(s.begin(), s.end(), greater<int>());

  // rep(i, 0, n + 1) { cout << s[i] << " "; }
  // cout << endl;

  ll temp = 0;
  rep(i, 0, n + 1) {
    temp += s[i];
    memo[s[i]] = temp;
    // cout << s[i] << ": " << memo[s[i]] << endl;
  }
  memo[1000001] = 0;

  rep(i, 1, n + 1) {
    if (i != 1) cout << " ";
    // cout << memo.lower_bound(a[i] + 1)->first << ":";
    cout << memo.lower_bound(a[i] + 1)->second;
  }
  cout << endl;
}
