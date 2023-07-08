#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, D;
  cin >> N >> K >> D;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];

  set<int> S;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      int sum = 0;
      for (int k = i; k <= j; k++) {
        sum += A[k];
      }
      S.insert(sum);
    }
  }

  int ans = -1;
  for (int s : S) {
    if (s % D == 0) {
      ans = s;
      break;
    }
  }

  cout << ans << endl;
  return 0;
}