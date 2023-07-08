#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n = 0;
  cin >> n;

  int h;
  cin >> h;

  int next = 0;
  rep(i, 1, n) {
    cin >> next;
    if (h < next) {
      h = next;
    } else {
      break;
    }
  }

  cout << h;
}
