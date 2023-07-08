#include <algorithm>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string dp(int x) {
  if (x == 1) {
    return "1";
  }
  return dp(x - 1) + to_string(x) + dp(x - 1);
}

int main() {
  int n;
  cin >> n;
  string ans;
  ans = dp(n);
  int l;
  l = ans.length();
  rep(i, l - 1) { cout << ans[i] << " "; }
  cout << ans[l - 1];
}
