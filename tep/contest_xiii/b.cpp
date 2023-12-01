#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
  int n;
  int results[4] = {0, 0, 0, 0};

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;

    if (s == "AC")
      results[0] += 1;
    else if (s == "WA")
      results[1] += 1;
    else if (s == "TLE")
      results[2] += 1;
    else if (s == "RE")
      results[3] += 1;
  }

  cout << "AC x " << results[0] << "\n"
       << "WA x " << results[1] << "\n"
       << "TLE x " << results[2] << "\n"
       << "RE x " << results[3] << "\n";

  return 0;
}