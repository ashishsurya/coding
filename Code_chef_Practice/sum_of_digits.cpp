#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    vector<int> arr;
    for(int i=0;i<s.size();i++){
      arr.push_back(s[i] - '0');
    }
    int sum = 0;
    for (int i=0;i<arr.size();i++){
      sum += arr[i];
    }
    cout << sum << "\n";
  }
  return 0;
}
