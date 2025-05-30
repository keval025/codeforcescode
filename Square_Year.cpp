#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int num = stoi(s);
    int m = sqrt(num);
    // int ans;
    if (m * m != num)
    {
      cout << -1 << endl;
    }
    else
    {
      cout << 0 << " " << m << endl;
    }
  }
  return 0;
}