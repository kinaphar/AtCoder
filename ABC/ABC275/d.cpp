#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

map<ll, ll> mp = {{0, 1}};
// mp[0] = 1: ←main関数の外側で代入はNG！

ll dfs(ll n) {
  if (n == 0) {
    return 1;
  }
  ll ans = 0;
  if (mp.count(n / 3) == 1) {
    ans += mp[n / 3];
  } else {
    ans += dfs(n / 3);
  }
  if (mp.count(n / 2) == 1) {
    ans += mp[n / 2];
  } else {
    ans += dfs(n / 2);
  }
  mp[n] = ans;
  return ans;
}

int main(void) {
  ll n;
  cin >> n;

  cout << dfs(n) << endl;  //【ここでdfs実行】
}
