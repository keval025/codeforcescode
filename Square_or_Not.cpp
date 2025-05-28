#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long m = sqrt(n);
    /*if (n % m != 0)
    {
      cout << "NO" << endl;
    }*/
    //cout << m << endl;
    long long cnt = 0;
    for (long long i = 0; i < s.size(); ++i)
    {
      if (s[i] == '1')
      {
        cnt++;
      }
    }
    //cout << cnt << endl;
    if ((m*m == n) && (cnt == (2 * m + 2 * (m - 2))))
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}