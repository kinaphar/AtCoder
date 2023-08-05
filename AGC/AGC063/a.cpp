#include <bits/stdc++.h>

#include <atcoder/modint>
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

  string s;
  cin >> s;

  queue<int> a;
  queue<int> b;

  rep(i, n + 1) {
    if (s[i] == 'A') a.push(i);
    if (s[i] == 'B') b.push(i);
  }

  string winner;

  rep(t, 1, n + 1) {
    if (t % 2 == 1) {  // Alice's turn.
      if (!b.empty()) b.pop();
    }
    if (t % 2 == 0) {  // Bob's turn.
      if (!a.empty()) a.pop();
    }

    if (a.empty()) {
      winner = "Bob";
    } else if (b.empty()) {
      winner = "Alice";
    } else {
      a.front() < b.front() ? winner = "Alice" : winner = "Bob";
    }
    cout << winner << endl;
  }
}
