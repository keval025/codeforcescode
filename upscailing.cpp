#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<string>> nums(2*n, vector<string>(2*n));
        int k = 0;
        
        for(int i=0;i<2*n;i+=2){
            for(int j=0;j<2*n;j+=2){
                if(k == 0){
                    nums[i][j] = '#';
                    nums[i][j+1] = '#';
                    nums[i+1][j] = '#';
                    nums[i+1][j+1] = '#';
                    k = 1;
                }
                else{
                    nums[i][j] = '.';
                    nums[i][j+1] = '.';
                    nums[i+1][j] = '.';
                    nums[i+1][j+1] = '.';
                    k = 0; 
                }
            }
            if(n % 2 == 0){
                if(k == 0){
                    k = 1;
                }
                else{
                    k = 0;
                }
            }
        }
        
        for(int i=0;i<2*n;++i){
            for(int j=0;j<2*n;++j){
                cout << nums[i][j];
            }
            cout << endl;
        }
    }
}
