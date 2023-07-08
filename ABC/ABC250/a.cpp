#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i <= (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i <= (int)(n); i++)

int main() {
  // cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ----------

  int h, w, r, c;

  cin >> h >> w;
  cin >> r >> c;

  int ans = 0;
  if (r + 1 <= h && 1 <= r + 1 && c <= w && 1 <= c) {
    ans++;
  }
  if (r <= h && 1 <= r && c - 1 <= w && 1 <= c - 1) {
    ans++;
  }
  if (r <= h && 1 <= r && c + 1 <= w && 1 <= c + 1) {
    ans++;
  }
  if (r - 1 <= h && 1 <= r - 1 && c <= w && 1 <= c) {
    ans++;
  }

  cout << ans << endl;
}
