#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  int evens = 0, odds = 0;
  for(int i=0;i<n;i++){
    if(arr[i]%2==0){
      evens++;
    }
    else{
      odds++;
    }
  }
  string result = (evens > odds) ? "READY FOR BATTLE" : "NOT READY";
  cout << result << "\n";
  return 0;
}
;