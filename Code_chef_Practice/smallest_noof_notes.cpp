#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int denom[] = {100,50,10,5,2,1};
    
    int notes = 0;
    for(int i=0;i<6;i++){
      if (n >= denom[i])
      {
        notes += n / denom[i];
        n %= denom[i];
      }
      else
      {
        continue;
      }
    }
    cout << notes << "\n";
  }
  return 0;
}
