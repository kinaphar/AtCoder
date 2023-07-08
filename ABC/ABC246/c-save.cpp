#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  // cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ----------

  int n, k, x;
  cin >> n >> k >> x;
  int a[n];
  int tmp;
  int hasuu;
  int rest[x];
  int sum;
  int discountsum;
  int ans;

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    a[n] = tmp;

    sum += a[n];
    hasuu = a[n] % x;
    discountsum += a[n] - hasuu;
    rest[hasuu]++;
  }

  int maxhasuu = x - 1;

  if (discountsum >= k * x) {
    ans = 0;
  } else {
    k -= discountsum / x;
    while (k > 0) {
      if (rest[maxhasuu] = 0) {
        maxhasuu--;
        continue;
      }
      if (k > rest[maxhasuu]) {
        discountsum += rest[maxhasuu] * x;
        break;
      } else {
        discountsum += rest[maxhasuu] * x;
        k - rest[maxhasuu];
        rest[maxhasuu] = 0;
      }
    }
    ans = sum - discountsum;
  }
  cout << ans;
}
