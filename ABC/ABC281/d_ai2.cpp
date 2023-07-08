#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, D;
  cin >> N >> K >> D;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int ans = -1;
  for (int i = 0; i < (1 << K); i++) {
    int sum = 0;
    for (int j = 0; j < K; j++) {
      if (i >> j & 1) {
        sum += A[j];
      }
    }
    if (sum % D == 0 && sum > ans) {
      ans = sum;
    }
  }
  cout << ans << endl;
  return 0;
}