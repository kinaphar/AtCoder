#include <bits/stdc++.h>
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
  ll n, m, l, f, b, w, x;
  ll ans = 0;
  set<ll> st;

  cin >> n >> m;
  rep(i, n) {
    cin >> l;
    st.insert(l);
    st.insert(-1);
    st.insert(1000000001);
  }

  rep(i, m) {
    cin >> f >> b >> w;
    if (st.count(f) == 1) {
      ans += w;
    } else {
      x = b;
      st.insert(f);
      auto itr = st.find(f);
      itr--;
      // cout << "マイナス方向を見る: " << *itr << endl;
      if (*itr != -1) {
        x = max(x, w - (f - *itr));
      }
      itr++;
      itr++;
      // cout << "プラス方向を見る: " << *itr << endl;
      if (*itr != 1000000001) {
        x = max(x, w - (*itr - f));
      }
      st.erase(f);
      ans += x;
    }
  }

  cout << ans;
}
