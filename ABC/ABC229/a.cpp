#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  string A, B, ans;
  cin >> A >> B;

  ans = "Yes";

  if (A == ".#") {
    if (B == "#.") {
      ans = "No";
    }
  }

  if (A == "#.") {
    if (B == ".#") {
      ans = "No";
    }
  }

  cout << ans;
}
