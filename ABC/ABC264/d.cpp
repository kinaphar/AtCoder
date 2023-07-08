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

  string s;
  cin >> s;
  string atcoder = "atcoder";

  string temp;
  int n;
  int ans = 0;

  rep(i, 0, 7) {
    n = s.find(atcoder[i]);
    // cout << n << endl;
    if (n != i) {
      temp = s.substr(i, n - i);
      s = s.replace(i + 1, n - i, temp);
      temp = atcoder[i];
      s = s.replace(i, 1, temp);
      // cout << s << endl;
      ans += n - i;
    }
  }

  cout << ans;
}
