#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cin >> n;

  vector<vector<double>> data(2, vector<double>(n));

  for (int i = 0; i < n; i++) {
    cin >> data.at(0).at(i) >> data.at(1).at(i);
  }

double a1, a2;
int ans = 0;
int count = 0;

  for (int i = 0; i < n-2; i++) {
    for (int j = i+1; j < n-1; j++){
      a1 = ( data.at(1).at(i) - data.at(1).at(j) ) / ( data.at(0).at(i) - data.at(0).at(j) );
      for (int k = j+1; k < n; k++){
        a2 = ( data.at(1).at(i) - data.at(1).at(k) ) / ( data.at(0).at(i) - data.at(0).at(k) );
        if (a1 == a2){
          cout << "i=" << data.at(0).at(i) << " " << data.at(1).at(i) << endl;
          cout << "j=" << data.at(0).at(j) << " " << data.at(1).at(j) << endl;
          cout << "k=" << data.at(0).at(k) << " " << data.at(1).at(k) << endl;
          cout << "a1 = " << a1 << ", a2 = " << a2 << endl; 
          cout << "--------" << endl;
        }
        count += 1;
      }
    }
  }

  cout << count << endl;

}

        // cout << "a1 = " << a1 << " , a2 = " << a2 << endl;
