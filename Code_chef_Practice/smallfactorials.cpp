#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    long long fact = 1;
    if (n == 0 || n == 1)
    {
      fact = 1;
    }
    else
    {
      while (n >= 1)
      {
        fact *= n;
        n--;
      }
    }
    cout << fact << "\n";
  }
  return 0;
}
