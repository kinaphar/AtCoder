#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  set<int> st;

  int tmp;
  rep(i, 0, n) {
    cin >> tmp;
    st.insert(tmp);
  }

  int ans = 0;
  int remain = n;
  bool flag = true;

  rep(i, 1, n + 1) {
    if (remain == 0) {
      break;
    }
    if (st.count(i) == 0) {
      if (remain >= 2) {
        remain -= 2;
      } else {
        flag = false;
      }
    } else {  // st.count(i) >= 1;
      remain--;
    }
    if (flag) {
      ans++;
    } else {
      break;
    }
  }
  cout << ans << endl;
}
