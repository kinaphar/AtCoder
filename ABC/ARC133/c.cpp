#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, s, n) for (int i = s; i < (int)(n); i++)
#define repl(i, s, n) for (ll i = s; i < (int)(n); i++)

int main() {
  int H, W, K, tmp;
  cin >> H >> W >> K;
  if (W > H) {
    tmp = H;
    H = W;
    W = tmp;
  }
  vector<int> rMod(H), cMod(W);
  rep(i, 0, H) {
    cin >> tmp;
    rMod[i] = (200000 * K - tmp - W) % K;  //(ロスを考える問題にする)
  }
  rep(i, 0, W) {
    cin >> tmp;
    cMod[i] = (200000 * K - tmp - H) % K;
  }

  vector<vector<int>> table;

  ll loss = 0;
  rep(i, 0, H) { loss += rMod[i]; }

  ll ans = (H * W) * (K - 1) - loss;
  cout << ans << endl;
}

// (Ai - minLossSum + K) % K
// H*W*(K-1) - minLossSumAll = Ans
