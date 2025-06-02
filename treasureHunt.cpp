#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    long long x, y, a;
    cin >> x >> y >> a;

    long long m = a / (x + y);
    a = a - (x+y)*m;
    
    if(x > a){
      cout << "NO" << endl;
    }
    else{
      cout << "YES" << endl;
    }
  }
  return 0;
}