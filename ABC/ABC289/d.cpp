#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, m, x;
  vector<int> s(100001);  // i段目が 0 = 未踏、1 = 踏める、2 = モチ.
  set<int> st;            // i段目から探索済みか？を管理.

  cin >> n;
  vector<int> a(n);
  rep(i, 0, n) { cin >> a[i]; }

  cin >> m;
  int tmp;
  rep(i, 0, m) {
    cin >> tmp;
    s[tmp] = 2;
    st.insert(tmp);
  }

  cin >> x;

  int mx = 0;
  s[0] = 1;
  int c;  // check.
  bool flag = false;
  int cont = 0;
  while (st.size() != cont) {
    cont = st.size();
    // cout << "[1] st.size() =" << st.size() << endl;  // デバッグ.
    // cout << "[2] mx =" << mx << endl;
    for (int i = mx; i >= 0; i--) {
      // cout << "[3] i = " << i << ": " << st.count(i) << endl;
      if (st.count(i) == 0 && s[i] == 1) {
        // cout << "Hit";
        rep(j, 0, n) {
          c = i + a[j];
          // cout << "c " << c << endl;
          if (c == x) {
            flag = true;
            break;
          }
          if (c < x) {
            if (s[c] == 0) {
              s[c] = 1;
              mx = max(mx, c);
              // cout << "[4] mx -> " << mx << endl;
            }
          }
        }
        // cout << "insert " << i << endl;  // デバッグ.
        st.insert(i);
      }
      if (flag) {
        break;
      }
    }
    if (flag) {
      break;
    }

    // for (auto itr = st.begin(); itr != st.end(); ++itr) {
    //   std::cout << *itr << " ";  // イテレータの指す先のデータを表示
    // }
    // cout << endl;
  }

  if (flag) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}