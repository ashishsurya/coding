#include<bits/stdc++.h>
using namespace std;

bool validMountain(vector<int>& arr) {
  int n = arr.size();
  int pivot = arr[floor(n/2)];
  bool ans;
  int left_count=0, right_count=0;
  if(n < 3) {
    ans = !(n<3);
  }
  else {
    for(int i=0;i<floor(n/2);i++) {
      if(arr[i] >= pivot) {
        left_count++;
        break;
      }
    }
    for(int i=floor(n/2) + 1;i<n;i++) {
      if(arr[i] >= pivot) {
        right_count++;
        break;
      }
    }
    ans = !(right_count || left_count);
  }

  return ans;
}

int main(){
  int n;
  cin >> n;
  vector<int> arr(n, 0);
  for(int i=0;i<n;i++) {
    cin >> arr[i];
  }
  cout << validMountain(arr);
  return 0;
}
