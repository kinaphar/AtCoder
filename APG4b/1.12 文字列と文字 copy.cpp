#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  string s;
  cin >> s;

  int v = 1;

  for (int i = 1; i < s.size(); i += 2) {
    if (s[i] == '-') {
      v--;
    }
    if (s[i] == '+') {
      v++;
    }
    // cout << i << endl;
  }

  cout << v << endl;
}
