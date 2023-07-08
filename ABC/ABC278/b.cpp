#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int h, m;
  cin >> h >> m;

  int a = h / 10;
  int b = h % 10;
  int c = m / 10;
  int d = m % 10;

  while (true) {
    if (a * 10 + c <= 23 && b * 10 + d <= 59) {
      cout << a << b << " " << c << d << endl;
      break;
    }

    if (m <= 59) {
      m++;
    } else if (h <= 22) {
      h++;
      m = 0;
    } else {
      h = 0;
      m = 0;
    }

    a = h / 10;
    b = h % 10;
    c = m / 10;
    d = m % 10;
  }
}
