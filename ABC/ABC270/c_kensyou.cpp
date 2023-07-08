#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  vector<int> e[200010];
  //「vector<int>型のe」が入る「要素200010個の配列」になる

  // cout << e[1][0] << endl;
  cout << e[1].size() << endl;
  e[1].push_back(3);
  cout << e[1].size() << endl;
  cout << e[1][0] << endl;
}
