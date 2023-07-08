#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int A;
  cin >> A;

  int tmp = 0;
  tmp += A;
  A = (A - A % 10) / 10 + 100 * (A % 10);
  tmp += A;
  A = (A - A % 10) / 10 + 100 * (A % 10);
  tmp += A;

  cout << tmp;
}
