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

  int n;
  string t;
  int arr[2];
  arr[0] = 0;
  arr[1] = 0;

  cin >> n;
  cin >> t;

  int dir = 0;

  for (int i = 0; i < t.length(); i++) {
    if (t[i] == 'R') {
      dir++;
    }
    if (t[i] == 'S') {
      if (dir % 4 == 0) {
        arr[0]++;
      } else if (dir % 4 == 1) {
        arr[1]--;
      } else if (dir % 4 == 2) {
        arr[0]--;
      } else if (dir % 4 == 3) {
        arr[1]++;
      }
    }
  }

  cout << arr[0] << " " << arr[1];
}
