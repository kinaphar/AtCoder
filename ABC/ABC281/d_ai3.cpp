#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, D;
  cin >> N >> K >> D;
  int A[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  int ans = -1;
  for (int i = 0; i < N - K + 1; i++) {
    int sum = 0;
    for (int j = 0; j < K; j++) {
      sum += A[i + j];
    }
    if (sum % D == 0) {
      ans = sum;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}