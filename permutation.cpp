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
    vector<long long> nums(n);
    for (long long i = 0; i < n; ++i)
    {
      cin >> nums[i];
    }

    for (long long i = 0; i < n; ++i)
    {
      cout << i + 1 << " ";
    }
    cout << endl;
  }
  return 0;
}