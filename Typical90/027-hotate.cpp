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
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
  int n;
  cin >> n;
  string s;
  map<string, int> S;
  for (int i = 1; i <= n; i++) {
    cin >> s;
    if (!S.count(s)) {
      S[s] = i;
      cout << i << endl;
    }
  }
  return 0;
}
