#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    int c = min(a, b);
    int ans = n / c;
    if (n % c != 0)
    {
      ans++;
    }
    cout << ans << endl;
  }
  return 0;
}