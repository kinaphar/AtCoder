#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;

  vector<int> v(n);
  int s = 0;

  rep(i, 0, n) {
    cin >> v[i];
    s += v[i];
  }

  int ave = s / n;
  rep(i, 0, n) { cout << abs(v[i] - ave) << endl; }
}
