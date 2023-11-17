#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int a, p, x;

  long long menor_preco = 10000000000;

  for (int i = 0; i < n; i++)
  {
    cin >> a >> p >> x;
    if (a < x && p < menor_preco)
    {
      menor_preco = p;
    }
  }

  if (menor_preco == 10000000000)
    cout << "-1\n";
  else
    cout << menor_preco << endl;

  return 0;
}