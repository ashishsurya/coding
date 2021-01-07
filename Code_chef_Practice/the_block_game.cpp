#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >>t;
  while(t--) {
    int n;
    cin >> n;
    int revNum = 0,pop=0, temp=n;
    while(temp!=0){
      pop = temp%10;
      revNum = (revNum * 10) + pop;
      temp /= 10;
    }
    string result = (n==revNum) ? "wins" : "loses";
    cout << result << "\n";
  }
  return 0;
}
