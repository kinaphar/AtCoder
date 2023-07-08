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

  // 端数は英語でfraction

  ll n;  //商品数
  ll k;  //枚数
  ll x;  //クーポン額面
  cin >> n >> k >> x;

  ll a[n];
  ll tmp;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  ll ans = 0;  //答え用

  ll sum = 0;   //全商品合計金額
  ll Dsum = 0;  //値引き額の合計。

  ll fraction = 0;        //端数
  ll fracs[x + 1] = {0};  //端数○○円の商品の数をそれぞれ格納

  ll Fmax = 0;

  for (int i = 0; i < n; i++) {
    sum += a[i];
    fraction = a[i] % x;
    fracs[fraction] += 1;
    Dsum += a[i] - fraction;
    //損なくクーポン使っていったときの値引き額の合計。 if (fraction > Fmax) {
    Fmax = fraction;
  }

  // if (Dsum >= k * x) {
  //   ans = sum - k * x;
  // }
  // else {
  //   k -= Dsum / x;
  //   while (k > 0 && Fmax > 0) {
  //     // クーポンがまだ残っている間
  //     // cout << k << "(k) " << Fmax << "(Fmax) " << fracs[Fmax];
  //     // cout << "fracs[Fmax]@start" << endl;
  //     if (fracs[Fmax] != 0) {
  //       if (k < fracs[Fmax]) {
  //         //クーポン足りてない場合
  //         Dsum += k * Fmax;
  //         k -= k;
  //       } else {
  //         Dsum += fracs[Fmax] * Fmax;  //商品数 * 値引く端数
  //         k -= fracs[Fmax];  //端数残ってた商品のぶん、クーポン枚数を消費

  //         // cout << Dsum << "(Dsum)@here " << endl;
  //       }
  //     }
  //     Fmax--;
  //     // cout << k << "(k) " << Fmax << "(Fmax) @end" << endl;
  //   }

  //   ans = sum - Dsum;
  // }

  // cout << ans << endl;
}
