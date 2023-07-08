#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  std::ifstream in("input.txt");
  std::cin.rdbuf(in.rdbuf());
  // ...

  int N, Q;
  cin >> N >> Q;

  int A[N];
  rep(i, 0, N) cin >> A[i];

  set<int> se;
  rep(i, 0, N) se.insert(A[i]);
}
