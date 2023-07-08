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
  int n, k;
  cin >> n >> k;
  int A[n], B[n];
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> B[i];
  }
  int dp[n][2];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2; j++) {
      dp[i][j] = -1;
    }
  }
  dp[0][0] = 1;
  dp[0][1] = 1;
  for (int i = 1; i < n; i++) {
    int aa = abs(A[i] - A[i - 1]);
    int ab = abs(B[i] - A[i - 1]);
    int ba = abs(A[i] - B[i - 1]);
    int bb = abs(B[i] - B[i - 1]);
    if (aa <= k || ba <= k) {
      dp[i][0] = 1;
    }
    if (ab <= k || bb <= k) {
      dp[i][1] = 1;
    }
  }
  for (int i = 0; i < n; i++) {
    if (dp[i][0] == 1 || dp[i][1] == 1) {
      continue;
    }
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}
