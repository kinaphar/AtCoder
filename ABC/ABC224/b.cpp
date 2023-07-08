#include <bits/stdc++.h>
using namespace std;

int main() {

  int h,w;
  cin >> h >> w;

  // int型の2次元配列(3×4要素の)の宣言
  vector<vector<int>> data(h, vector<int>(w));

  // 入力 (2重ループを用いる)
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> data.at(i).at(j);
    }
  }

  int flag = 0;
  int checker = 0;

    for (int i = 0; i < h-1; i++) {
      for (int j = 0; j < w-1; j++) {
        checker = data.at(i).at(j+1) + data.at(i+1).at(j) - data.at(i).at(j) - data.at(i+1).at(j+1);
        if (checker < 0){
          flag = 1;
        }
      }
    }

  if(flag == 1){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }

}
