#include<bits/stdc++.h>
using namespace std;
int a[100], dp[100];
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    dp[0] = 0;
    for(int i = 1; i < n; i++){
        dp[i] = dp[i-1] + 1;
        if(i > 1) dp[i] = min(dp[i], dp[i-2] + 1);
        if(a[i] == 1) dp[i] = n + 1;
    }
    
    cout << dp[n-1] << endl;
    return 0;
}
