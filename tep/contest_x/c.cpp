#include <bits/stdc++.h>

using namespace std;

int solve(long long i)
{
  long long count = 0;

  while (i > 1)
  {
    if (i % 2 != 0)
      return -1;

    i = i / 2;
    count++;
  }
  return count - 1;
}

int main()
{
  long long n;
  cin >> n;
  long long i = n;

  while (i < 2)
  {
    if (solve(i) != -1)
    {
      break;
    }
    else
    {
      i--;
    }
  }

  if (i < 2)
    cout << n << endl;
  else
  {
    cout << n - solve(i) << endl;
  }

  return 0;
}