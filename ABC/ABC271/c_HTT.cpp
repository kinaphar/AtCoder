#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <vector>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
typedef long long ll;
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;

int main() {
  ll n;
  cin >> n;
  ll a[n];
  set<ll> b;
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  for (ll i = 0; i < n; i++) {
    b.insert(a[i]);
  }
  ll sold = n - b.size();
  deque<ll> d;
  for (auto x : b) {
    d.push_back(x);
  }
  ll ans = 0;
  //ダブりがあるものから売っていく
  while (sold >= 2) {
    if (d.size() != 0) {
      ll read = ans + 1;
      ll now = d.front();
      if (read == now) {
        d.pop_front();
        ans++;
      } else {
        sold -= 2;
        ans++;
      }
    } else {
      sold -= 2;
      ans++;
    }
  }
  //ダブりが無くなったら巻の大きい方から売る
  while (d.size() > 1) {
    ll read = ans + 1;
    ll now = d.front();
    if (read == now) {
      d.pop_front();
      ans++;
    } else {
      //ダブりの数が奇数の場合、ダブる漫画が1つ残るのでこれと最大の巻を売る
      if (sold == 1) {
        sold -= 1;
        d.pop_back();
        ans++;
      } else {
        d.pop_back();
        d.pop_back();
        ans++;
      }
    }
  }
  //最後に残った巻が読めるなら読む
  if (d.size() == 1) {
    if (d.front() == ans + 1 || sold == 1) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
