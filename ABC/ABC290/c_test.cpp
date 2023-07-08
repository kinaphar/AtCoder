int main() {
  int N, K, MEX;
  cin >> N >> K;
  int A[N];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  int B[K];
  for (int i = 0; i < K; i++) {
    cin >> B[i];
  }
  MEX = 0;
  for (int i = 0; i < K; i++) {
    if (B[i] > MEX) {
      MEX = B[i];
    }
  }
  cout << MEX << endl;
  return 0;
}