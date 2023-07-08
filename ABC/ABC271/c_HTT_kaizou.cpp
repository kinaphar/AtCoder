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
  set<ll> st;
  ll ans = 0;

  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  //これでソートできるらしい
  // https://programming-place.net/ppp/contents/cpp/rev_res/array002.html
  for (ll i = 0; i < n; i++) {
    st.insert(a[i]);
  }
  ll sold = n - st.size();  //ダブりの数

  deque<ll> deq;
  for (auto x : st) {
    deq.push_back(x);
  }

  //ダブりがあるものから売っていく
  while (sold >= 2) {
    if (deq.size() != 0) {
      ll read = ans + 1;
      ll now = deq.front();
      if (read == now) {
        deq.pop_front();
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
  while (deq.size() > 1) {
    ll read = ans + 1;
    ll now = deq.front();
    if (read == now) {
      deq.pop_front();
      ans++;
    } else {
      //ダブりの数が奇数の場合、ダブる漫画が1つ残るのでこれと最大の巻を売る
      if (sold == 1) {
        sold -= 1;
        deq.pop_back();
        ans++;
      } else {
        deq.pop_back();
        deq.pop_back();
        ans++;
      }
    }
  }

  //最後に残った巻が読めるなら読む
  if (deq.size() == 1) {
    if (deq.front() == ans + 1) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
