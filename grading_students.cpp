#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void solution(){
	int n, x;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x;
		if(x >= 38 && x % 5 >= 3){
			while(x%5 != 0){
				x++;
			}
		}
		cout << x << endl;
	}
}

int main(){
	solution();
	return 0;
}
