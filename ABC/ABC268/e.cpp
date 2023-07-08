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

  vector<int> v(n);
  vector<int> m(n);
  rep(i, 0, n) {
    cin >> v[i];
    m[(n + v[i] - i) % n]++;
  }

  int sm = 0;
  int si = 0;
  vector<int> s(n);
  int ans = 0;
  int ansmin = 0;
  if (n % 2 == 0) {
    rep(i, 0, n) { s[i] += m[i]; }
    rep(i, 0, n) {
      if (sm < abs(s[i] - s[n / 2 + i])) {
        sm = abs(s[i] - s[n / 2 + i]);
        si = i;
      }
    }
    int st = si + n / 2;
    rep(i, 0, n) { ansmin += abs(st - v[i]); }
    rep(i, 0, n) { ans += abs(st + 1 - v[i]); }
    ansmin = min(ans, ansmin);
  }
  cout << si << endl;
  cout << ansmin;
}
