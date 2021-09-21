#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while (t--){
        int k;
        cin >> k;
        for (int i=1; k<=i; i++){
          if (i%3==0 || i%10==3) k++;
        }
        cout << k << endl;
    }
    return 0;
}




