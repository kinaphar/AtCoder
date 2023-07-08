#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ...

  // N人 K枚 A最初

  int N, K, A;
  cin >> N >> K >> A;

  cout << (A + K - 1 - 1) % N + 1 << endl;
}