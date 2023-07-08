#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
using namespace atcoder;
using mint = modint998244353;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

// size_t countDigits(int n) {
//   string tmp;

//   tmp = to_string(n);
//   return tmp.size();
// }

int string_mod(string s, int mod) {
  int rest = 0;
  for (char c : s) {
    int v = c - '0';
    rest = (rest * 10 + v) % mod;
  }
  return rest;
}

int main() {
  int q, type;
  string s = "1";
  string x;

  cin >> q;

  rep(i, 0, q) {
    cin >> type;
    switch (type) {
      case 1:
        cin >> x;
        // cout << "case 1, x = " << x << endl;
        s += x;
        break;
      case 2:
        // cout << "case 2" << endl;
        s.erase(0, 1);
        break;
      case 3:
        // cout << "case 3" << endl;
        cout << string_mod(s, 998244353) << endl;
      default:
        break;
    }
  }
}