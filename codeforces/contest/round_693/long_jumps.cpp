#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    int max_score = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
      int cur_sum = 0;
      while(i<n) {
        cur_sum = cur_sum + arr[i];
        i = i + arr[i];
      }
      max_score = max(cur_sum, max_score);
    }
    cout << max_score << "\n";
  }
  return 0;
}
