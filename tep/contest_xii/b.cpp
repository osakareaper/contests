#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
  int n, num, caso = 0;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> num;

    if (num % 2 == 0)
    {
      if (num % 3 != 0)
      {
        if (num % 5 != 0)
        {
          caso = 1;
          break;
        }
      }
    }
  }

  caso == 1 ? cout << "DENIED\n" : cout << "APPROVED\n";

  return 0;
}