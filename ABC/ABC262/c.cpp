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

  int n;
  cin >> n;

  vector<int> data(n + 1);

  int a;

  rep(i, 1, n + 1) {
    cin >> a;
    data[i] = a;
  }

  ll ans = 0;
  ll cor = 0;

  rep(i, 1, n + 1) {
    if (data[i] == i) {
      cor++;
    } else {
      if (data[data[i]] == i) {
        ans++;
      }
    }
  }
  ans = ans / 2;

  // cout << ans << endl;
  // cout << cor << endl;

  ans += cor * (cor - 1) / 2;

  cout << ans;
}
