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
#define I_MAX 2147483647;
#define LL_MAX 9223372036854775806;

map<string, vector<string>> g;
map<string, bool> pass;

void dfs(string s) {
  for (auto t : g[s]) {
    cout << "enter " << t << endl;
    if (pass[t]) {
      cout << "No" << endl;
      exit(0);
    }
    pass[t] = true;
    dfs(t);
  }
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s, t;
    cin >> s >> t;
    g[s].push_back(t);
  }
  for (auto name : g) {
    if (!pass[name.first]) {
      pass[name.first] = true;
      dfs(name.first);
    }
  }
  cout << "Yes" << endl;
  return 0;
}