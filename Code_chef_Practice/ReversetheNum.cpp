#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int revNum = 0, pop=0;
    while(n!=0) {
      pop = n%10;
      revNum = (revNum * 10) + pop;
      n /= 10;
    }
    cout << revNum << "\n";

  }
  return 0;
}
