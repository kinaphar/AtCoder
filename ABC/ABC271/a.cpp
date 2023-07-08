#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;

  char x;
  char y;

  if (n / 16 == 10) {
    x = 'A';
  } else if (n / 16 == 11) {
    x = 'B';
  } else if (n / 16 == 12) {
    x = 'C';
  } else if (n / 16 == 13) {
    x = 'D';
  } else if (n / 16 == 14) {
    x = 'E';
  } else if (n / 16 == 15) {
    x = 'F';
  } else {
    x = '0' + n / 16;
  }

  if (n % 16 == 10) {
    y = 'A';
  } else if (n % 16 == 11) {
    y = 'B';
  } else if (n % 16 == 12) {
    y = 'C';
  } else if (n % 16 == 13) {
    y = 'D';
  } else if (n % 16 == 14) {
    y = 'E';
  } else if (n % 16 == 15) {
    y = 'F';
  } else {
    y = '0' + n % 16;
  }
  cout << x << y << endl;
}
