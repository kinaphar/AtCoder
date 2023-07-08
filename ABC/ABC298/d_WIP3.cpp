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

ll string_mod(string s, ll mod) {
  ll rest = 0;
  int l = s.length();
  string tmp = s.substr(0, l % 10);
  for (char c : tmp) {
    ll v = c - '0';
    rest = (rest * 10 + v) % mod;
  }
  s.erase(0, l % 10);

  rep(i, 0, l / 10) {
    string c = s.substr(0, 10);
    ll v = stoll(c);
    rest = (rest * 10000000000 + v) % mod;
  }
  return rest;
}

int main() {
  ll q, type;
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
