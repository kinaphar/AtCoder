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

  vector<ll> s(n);
  vector<ll> c(n);
  set<pair<ll, ll>> st;

  ll total = 0;

  rep(i, n) {
    cin >> s[i];
    s.insert(s[i]);
    }
  rep(i, n) {
    cin >> c[i];
    total += c[i];
  }
  rep(i, n) {
    pair<ll, ll> p = make_pair(s[i], c[i]);
    st.insert{p};
  }

  for (auto ite = st.begin(); ite != st.end(); ite++) {
    *ite << ", ";
    if (c[i] / 2 > 0) {
      if (s.count(i * 2) == 0) {
        s.push_back();
        c.push_back();
      }
      c[i * 2] += c[i] / 2;
      total -= c[i] / 2;
    }
  }

  rep(i, n) {
    if (c[i] / 2 > 0) {
      if (s.count(i * 2) == 0) {
        s.push_back();
        c.push_back();
      }
      c[i * 2] += c[i] / 2;
      total -= c[i] / 2;
    }
  }

  cout << total << endl;
}
