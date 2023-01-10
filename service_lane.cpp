#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int solve(const vector<int>& width, int i, int j) {
    int ans = width[i];
    
    for (int o = i+1; o <= j;o++)
        if (width[o] < ans)
            ans = width[o];
        
    return ans;
}
int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> width(n);
    for(int i = 0; i < n; i++){
       cin >> width[i];
    }
    for(int i = 0; i < t; i++){
        int idx;
        int j;
        cin >> idx >> j;
        
        cout << solve(width,idx,j) << endl;
    }
    return 0;
}
