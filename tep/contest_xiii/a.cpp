#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
  int n, ans;
  cin >> n;
  ans = n % 1000;
  if (ans != 0)
    cout << 1000 - ans << endl;
  else
    cout << 0 << endl;

  return 0;
}