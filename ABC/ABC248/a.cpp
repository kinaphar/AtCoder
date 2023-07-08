#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  string a;
  cin >> a;
  int sum;
  for (int i = 0; i < 9; i++) {
    sum += a[i] - '0';
  }
  cout << 45 - sum;
}
