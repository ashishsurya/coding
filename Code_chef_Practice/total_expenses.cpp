#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int q, p;
    cin >> q >> p;
    float total_price = q*p;
    if(q>1000){
      cout << fixed << setprecision(6) << total_price * 0.9 << "\n";
    }
    else{
      cout << fixed << setprecision(6) << total_price << "\n";
    }
  }
  return 0;
}
