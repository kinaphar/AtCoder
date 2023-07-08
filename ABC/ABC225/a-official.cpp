#include <bits/stdc++.h>
using namespace std;
int main() {
  string S;
  cin >> S;
  int ans = 3;
  if (S[0] == S[1] && S[1] == S[2])  // string型、[数字]でn文字目取れちゃう
    ans = 1;
  else if (S[0] != S[1] && S[1] != S[2] && S[2] != S[0])
    ans = 6;
  cout << ans << endl;
}
