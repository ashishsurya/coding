#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int t;
  cin >> t;
  while(t--){
    string num;
    cin >> num;
    vector<int> arr;
    for (int i = 0; i < num.size(); i++)
    {
      arr.push_back(num[i] - '0');
    }
    int sum = 0;
    sum = *arr.begin() + *(arr.begin() + arr.size() - 1);
    cout << sum << "\n";
  }
  return 0;
}
