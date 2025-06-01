#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    set <int> st;
    st.insert(a1 + a2);
    st.insert(a3 - a2);
    st.insert(a4 - a3);
    cout << 4 - st.size() << endl;
  }
  return 0;
}