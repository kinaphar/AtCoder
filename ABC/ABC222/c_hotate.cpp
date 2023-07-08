#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <cmath>
#include <limits>
#include <map>
using namespace std;

bool isWinA(char a, char b){
  if (a == 'G' && b == 'C')
    return true;
  else if (a == 'C' && b == 'P')
    return true;
  else if(a == 'P' && b == 'G')
    return true;
  else
    return false;
}

int main(){
  int N, M;
  cin >> N >> M;

  // これは答え
  N = 2 * N;

  string A[N];

  for (int i = 0; i < N; i++)
  {   
    cin >> A[i];
  }
  pair<int, int> B[N];
// 配列 B の 引数 が順位
// <勝数, ゼッケン>

  for (int i = 0; i < N;i++){
    B[i].first = 0;
    B[i].second = i + 1;
  }

  for (int i = 0; i < M;i++){
    
    for (int j = 0; j < N; j=j+2){
      if(isWinA(A[B[j].second-1][i], A[B[j+1].second-1][i]))//1番目が勝った時
      { 
        B[j].first = B[j].first + 1;
      }
      else if (isWinA(A[B[j+1].second-1][i], A[B[j].second-1][i]))//2番目が勝った時
      { 
        B[j + 1].first = B[j + 1].first + 1;
      }
    }

    sort(B, B + N, greater< pair<int, int> >());

// 4人いる！！！！
/*
[4, 4]
[4, 1]
[2, 2]
[2, 3]
*/
    for (int i = 0; i < N;i++){
// iが0から3まで増える　for文

      if (B[i].first == B[i+1].first){
// 最初: 0位と1位、勝利数同じ？

        for (int j = i+1; j < N;j++){
// 1~4

          if (B[i].first == B[j].first && B[i].second > B[j].second)
          {
            swap(B[i], B[j]);
          }
        }
      }
    }






  }
  for (int i = 0; i < N;i++){
  cout << B[i].second << endl;
}
  return 0;
}