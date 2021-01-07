#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int ans[n];
  int i = 0, j = n - 1;
  for (int k = 0; k < n; k++)
  {
    if (k % 2 == 0)
    {
      ans[k] = arr[i];
      i++;
    }
    else
    {
      ans[k] = arr[j];
      j--;
    }
  }
  for (auto ele : ans)
  {
    cout << ele << " ";
  }
  cout << "\n";
}

int main(int argc, char const *argv[])
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
