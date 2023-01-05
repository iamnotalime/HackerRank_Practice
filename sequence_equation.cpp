#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, a[100];
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            if(a[a[j]] == i){
                cout << j << endl;
                break;
            }
        }
    }
    return 0;
}
