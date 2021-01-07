#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) {
      cin >> arr[i];
    }
    int sum = 0;
    int one_gram_candies=0, two_gram_candies = 0;
    for (int i=0;i<n;i++) {
      sum += arr[i];
    }
    if(n%2!=0 || sum %2!=0) {
      cout << "NO" << "\n";
    }
    else {
      for(int i=0;i<n;i++) {
        if(arr[i] == 1) one_gram_candies++;
        else two_gram_candies++;
      }
      if(one_gram_candies == two_gram_candies || one_gram_candies == 0 || two_gram_candies == 0) cout << "YES" << "\n";
      else cout << "NO" << "\n";
    }

  }
  return 0;
}
