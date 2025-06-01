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

    long long no_of_even = 0;
    long long no_of_odd = 0;
    for (long long i = 0; i < n; ++i)
    {
      if (nums[i] % 2 == 0)
      {
        no_of_even++;
      }
      else
      {
        no_of_odd++;
      }
    }
    long long cnt = 0;
    // cnt += no_of_odd;
    if (no_of_even > 0)
    {
      cnt += no_of_odd + 1;
    }
    else
    {
      cnt += no_of_odd - 1;
    }
    cout << cnt << endl;
  }
  return 0;
}
