#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    string result = (n < 10) ? "Thanks for helping Chef!" : "-1";
    cout << result << "\n";
  }
  return 0;
}
