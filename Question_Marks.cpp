#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    int cnt4 = 0;
    int ans = 0;
    for(int i=0;i<(4*n);++i){
      if(s[i] == 'A'){
        cnt1++;
      }
      else if(s[i] == 'B'){
        cnt2++;
      }
      else if(s[i] == 'C'){
        cnt3++;
      }
      else if(s[i] == 'D'){
        cnt4++;
      }
    }

    if(cnt1 > n){
      cnt1 = n;
    }
    if(cnt2 > n){
      cnt2 = n;
    }
    if(cnt3 > n){
      cnt3 = n;
    }
    if(cnt4 > n){
      cnt4 = n;
    }
    ans += cnt1 + cnt2 + cnt3 + cnt4;
    cout << ans << endl;
  }
  return 0;
}