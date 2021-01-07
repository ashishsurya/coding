#include<bits/stdc++.h>

using namespace std;

int sum(int D, int N){
  int ans = 0,d=D, n=N;
  for(int i=0;i<d;i++){
    ans = n * (n+1) / 2;
    n = ans;
  }
  return ans;
}

int main(){
  int t;
  cin >> t;
  while(t--) {
    int d, n;
    cin >> d >> n;
    cout << sum(d, n) << "\n";
  }
  return 0;
}
