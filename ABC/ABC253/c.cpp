#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  // cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ----------

  // map<ll, int> data;

  int q;
  cin >> q;
  multiset<int> st;

  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      int x;
      cin >> x;
      st.insert(x);
    } else if (t == 2) {
      int x, c;
      cin >> x >> c;
      while (c-- and st.find(x) != st.end()) {
        st.erase(st.find(x));
        // st.count(x);
      }
    } else {
      cout << *st.rbegin() - *st.begin() << endl;
    }
  }
}
