#include <bits/stdc++.h>
using namespace std;

int main(){
  long long t;
  cin >> t;
  while(t--){
    long long a, b, c;
    cin >> a >> b >> c;

    long long ans = 0;
    ans += a;
    ans += (b / 3);
    if((b % 3 == 1 && c < 2) || (b % 3 == 2 && c < 1)){
      ans = -1;
      break;
    }
    else{
      ans += ((b % 3) + c) / 3;
      ans += ((b % 3) + c) % 3;
      //break;
    }
    cout << ans << endl;
  }
  return 0;
}