#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int draw;
  float balance;
  cin >> draw >> balance;
  if ((draw % 5 == 0) && ((draw + 0.5) <= balance))
  {
    balance = balance - draw - 0.5;
    printf("%.2f", balance);
  }
  else
  {
    printf("%.2f", balance);
  }
  return 0;
}
