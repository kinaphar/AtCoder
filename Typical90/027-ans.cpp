#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
typedef long long ll;

int main() {
  int n;
  cin >> n;
  map<string, int> Map;

  rep(i, 0, n) {
    if (Map[S[i]] == 0) cout << i << endl;
    Map[S[i]] = 1;
  }
}
