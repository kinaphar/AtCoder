#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
  // 追加２, 以降 cin の入力元が 'input.txt' になる
  // std::ifstream in("input.txt");
  // std::cin.rdbuf(in.rdbuf());
  // ...

  int n = 0;
  int k = 0;
  int tmp = 0;
  int flag = 0;
  int ans = 0;
  vector<int> v;

  cin >> n >> k;
  rep(i, n) {
    cin >> tmp;
    v.push_back(tmp);
  }

  while (flag == 0) {
    ans++;
    sort(v.begin(), v.end(), std::greater<int>());
    rep(j, k) {
      v[j]--;
      if (v[k] == 0) {
        flag == 1;
        break;
      }
    }
  }
  cout << ans << endl;
}
