#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int R;
		int C;
		cin >> R >> C;
		vector<string> G(R);
		for(int i = 0; i < R; i++){
			cin >> G[i];
		}
		
		int r;
		int c;
		cin >> r >> c;
		vector<string> P(r);
		for(int i = 0; i < r; i++){
			cin >> P[i];
		}
		
		if(r > R || c > C){
			cout << "No\n";
			continue;
		}
		
		bool pattern_exist = false;
		for(int i = 0; i < R; i++){
			bool found_match = false;
			for(int j = 0; j < C; j++){
				if(G[i][j] == P[0][0] && (i+r <= R) && (j + c <= C)){
					bool match = true;
					for(int x = 0; x < r; x++){
						bool rowMatch = true;
						for(int y = 0; y < c; y++){
							if(P[x][y] != G[x+i][y+j]){
								rowMatch = false;
								match = false;
								break;
							}
						}
						
						if(!rowMatch){
							break;
						}
					}
					
					if(match){
						found_match = true;
						break;
					}
				}
			}
			
			if(found_match){
				pattern_exist = true;
				break;
			}
		}
		
		if(pattern_exist){
			cout << "YES\n";
		}else{
			cout << "NO\n";	
		}
	}
	return 0;
}
