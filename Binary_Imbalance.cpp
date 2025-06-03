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
    string s;
    cin >> s;

    // int no_0s = 0;
    int no_1s = 0;
    // int diff = 0;
    for (int i = 0; i < n; ++i)
    {
      if (s[i] == '1')
      {
        no_1s++;
      }
    }

    if (no_1s == n)
    {
      cout << "NO" << endl;
    }
    else
    {
      cout << "YES" << endl;
    }
  }
  return 0;
}