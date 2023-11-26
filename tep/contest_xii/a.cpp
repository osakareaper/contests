#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  if (a == b && a == c)
    cout << "No\n";
  else if (a != b && a != c && b != c)
    cout << "No\n";
  else
    cout << "Yes\n";

  return 0;
}