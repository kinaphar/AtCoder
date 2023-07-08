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

  vector<string> data(15);
  data[0] = "bbbbbbbbbbbbbbb";
  data[1] = "bwwwwwwwwwwwwwb";
  data[2] = "bwbbbbbbbbbbbwb";
  data[3] = "bwbwwwwwwwwwbwb";
  data[4] = "bwbwbbbbbbbwbwb";
  data[5] = "bwbwbwwwwwbwbwb";
  data[6] = "bwbwbwbbbwbwbwb";
  data[7] = "bwbwbwbwbwbwbwb";
  data[8] = "bwbwbwbbbwbwbwb";
  data[9] = "bwbwbwwwwwbwbwb";
  data[10] = "bwbwbbbbbbbwbwb";
  data[11] = "bwbwwwwwwwwwbwb";
  data[12] = "bwbbbbbbbbbbbwb";
  data[13] = "bwwwwwwwwwwwwwb";
  data[14] = "bbbbbbbbbbbbbbb";

  char b = 'b';
  int r, c;
  cin >> r >> c;
  if (data[r - 1][c - 1] == b) {
    cout << "black";
  } else {
    cout << "white";
  }
}
