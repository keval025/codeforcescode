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
    vector<long long> nums1(n);
    vector<long long> nums2(n);

    for (long long i = 0; i < n; ++i)
    {
      cin >> nums1[i];
    }

    for (long long i = 0; i < n; ++i)
    {
      cin >> nums2[i];
    }

    set<long long> st1;
    set<long long> st2;
    for (long long i = 0; i < n; ++i)
    {
      st1.insert(nums1[i]);
      st2.insert(nums2[i]);
    }

    if ((st1.size() >= 3 || st2.size() >= 3) || (st1.size() == 2 && st2.size() == 2))
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