#include<bits/stdc++.h>
#include<iostream>

using namespace std;


int main(){
	int N;
	cin >> N;
	
	vector<int> B(N);
	
	for(int i = 0; i < N; i++){
		cin >> B[i];
	}
	
	int i = 0, odd = 0, p = 0, q = 0;
	while(i < N){
		if(B[i] % 2 != 0){
			odd++;
			i++;
			
			if(odd % 2 == 0){
				q += ++p;
				p = 0;
			}
			
			while((B[i] % 2 == 0) && (i < N) && (odd % 2 != 0)){
				p++;
				i++;
			}
		}else{
			i++;
		}
	}
	
	if(odd % 2 == 0){
		cout << 2*q << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}







