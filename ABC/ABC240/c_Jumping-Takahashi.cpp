#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, x;
  cin >> n >> x;

  int a[n];
  int b[n];

  rep(i, 0, n) {
    cin >> a[i] >> b[i];
    cout << a[i] << " " << b[i];
  }

  set<int> st;
  st.insert(0);
  rep(i, 0, n) {
    for (auto itr = st.begin(); itr != st.end(); ++itr) {
      st.insert(*itr + a[i]);
      st.insert(*itr + b[i]);
    }
  }

  if (st.count(x) == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
