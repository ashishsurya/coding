#include <bits/stdc++.h>

using namespace std;
void solve(){
  int w, h, n;
  cin >> w >> h >> n;
  int answer = 1;
  while (w%2==0) {
    w /= 2;
    answer *=2;
  }
  while(h%2==0) {
    h /=2;
    answer *= 2;
  }
  string result = (answer >= n) ? "YES" : "NO";
  cout << result << "\n";
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
