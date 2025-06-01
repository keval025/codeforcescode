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

    if (n % 2 != 0)
    {
      cout << "NO" << endl;
    }
    else
    {
      cout << "YES" << endl;
      string s;
      while (n > 0)
      {
        s.push_back('B');
        s.push_back('B');
        s.push_back('A');
        n -= 2;
      }
      cout << s << endl;
    }
  }
  return 0;
}
