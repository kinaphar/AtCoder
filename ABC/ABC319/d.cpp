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
  ll n, m;
  cin >> n >> m;

  vector<ll> a(n);
  ll sum = 0;
  ll longest = 0;

  rep(i, 0, n) {
    cin >> a[i];
    sum += a[i];
    longest = max(longest, a[i]);
  }

  ll max_NG = longest - 1;  // 「最長の1単語の幅」以上を担保.
  ll min_OK = sum + n - 1;

  // cout << "max_NG = " << max_NG << endl;
  // cout << "min_OK = " << min_OK << endl;

  ll w = (sum + n) / m;
  ll tmp;

  while (max_NG + 1 != min_OK) {
    ll line = 1;
    ll length_now = 0;
    rep(i, 0, n) {
      if (length_now == 0) {
        length_now += a[i];
      } else {
        if (length_now + 1 + a[i] > w) {
          line++;
          // cout << "改行 to " << line << ", length_now = " << length_now <<
          // endl;
          length_now = 0 + a[i];
        } else {
          length_now += 1 + a[i];
        }
      }
    }
    if (line > m) {
      // cout << "行数超過NGケース, w = " << w;
      max_NG = w;
      tmp = ((line - m) * w + length_now) / m;
      w = min(w + tmp, min_OK - 1);  // 足したいけど、min_OKよりは小さく.
      // cout << " → w = " << w << endl;
      if (w == max_NG) {
        w++;
      }
    } else {
      // cout << "行数以内ケース, w = " << w;
      if (w < min_OK) {
        min_OK = w;
      }
      tmp = ((m - line) * w + (w - length_now)) / m;
      w = max(w - tmp, max_NG + 1);  // 引きたいけど、max_NGよりは大きく.
      // cout << " → w = " << w << endl;
      if (w == min_OK) {
        w--;
      }
    }
  }

  cout << min_OK << endl;
}
