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
  int n, sl, tl, error, offset;
  cin >> n;

  string t;
  cin >> t;

  vector<string> s(n);
  vector<int> a;
  int ans = 0;  // 答えの個数.

  rep(i, n) {
    cin >> s[i];
    sl = s[i].length();
    tl = t.length();

    if (sl - tl >= 2 || sl - tl <= -2) {
      continue;
    }

    error = 0;  // カウンタ初期化.
    offset = 0;

    if (sl == tl) {
      rep(j, sl) {
        if (s[i][j] != t[j]) {
          if (error >= 1) {
            error++;
            break;
          } else {
            error++;
          }
        }
      }
    } else if (sl == tl - 1) {  // slのほうが短い.
      rep(j, sl) {
        if (s[i][j - offset] != t[j]) {
          if (error >= 1) {
            error++;
            break;
          } else {
            error++;
            sl++;
            offset += 1;
          }
        }
      }
    } else if (sl == tl + 1) {  // tlのほうが短い.
      rep(j, tl) {
        if (s[i][j] != t[j - offset]) {
          if (error >= 1) {
            error++;
            break;
          } else {
            error++;
            tl++;
            offset += 1;
          }
        }
      }
    }

    if (error >= 2) continue;

    a.push_back(i);
    ans++;
  }

  cout << ans << endl;
  rep(i, ans) {
    if (i != 0) {
      cout << " ";
    }
    cout << a[i] + 1;
  }
}