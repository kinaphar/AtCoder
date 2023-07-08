#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  map<int, pair<int, int>> mp;  // 分数, 番目, 累計.
  mp[100] = {1, 10};
  mp[200] = {2, 20};

  auto itr = mp.find(100);
  cout << itr->first;
  // cout << *itr.first << endl;
  // cout << *itr.second << endl;
}
