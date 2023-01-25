#include <iostream>
using namespace std;

int main(){
	int n, comeu=0;
	cin>>n;
	int matriz[n][n];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>matriz[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(matriz[i][j]==1){
				if(i>=2 and j>=2 and i+2<=n and j+2<=n){
					if(matriz[i-1][j-2]==2){
						comeu++;
					}if(matriz[i-2][j-1]==2){
						comeu++;
					}if(matriz[i-1][j+2]==2){
						comeu++;
					}if(matriz[i-2][j+1]==2){
						comeu++;
					}if(matriz[i+1][j-2]==2){
						comeu++;
					}if(matriz[i+2][j-1]==2){
						comeu++;
					}if(matriz[i+1][j+2]==2){
						comeu++;
					}if(matriz[i+2][j+1]==2){
						comeu++;
					}
				}
				else if(i>=2 and j>=2 and i
				
			}
		}
	}
	
	
	return 0;
}
