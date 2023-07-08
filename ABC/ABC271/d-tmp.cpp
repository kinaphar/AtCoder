#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n, s;
  cin >> n >> s;
  vector<string> v(s);

  vector<int> diff(n);

  int a, b;
  int minsum = 0;

  rep(i, 0, n) {
    cin >> a >> b;
    diff[i] = abs(a - b);
    minsum += min(a, b);
  }

    // cout << minsum;
}
