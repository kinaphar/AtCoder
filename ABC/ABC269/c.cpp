#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

vector<int> output(vector<int> &data, int i) {
  // ベースケース
  if (i == data.size()) {
    vector<int> empty_array(0);  // 要素数0の配列
    return empty_array;
  }

  // 再帰ステップ
  vector<int> tmp = reverse_array_from_i(
      data, i + 1);  // dataのi+1番目以降の要素を逆順にした配列を得る
  tmp.push_back(data.at(i));  // 末尾にdataのi番目の要素を追加
  return tmp;
}

int main() {
  // cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ----------

  ll n;
  cin >> n;

  string bin = "";
  vector<int> digit(0);
  int digitp = 0;

  while (n > 0) {
    // bin = (char)(n % 2) + bin;
    bin.insert(0, to_string(n % 2));
    // cout << n % 2 << "(n%2)" << endl;
    n -= n % 2;
    n /= 2;
    // cout << n << endl;

    digit.push_back(digitp);
    cout << digitp << endl;
    digitp++;
  }

  // output(digit, 0);
}
