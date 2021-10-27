#include<bits/stdc++.h> 
#include<string>
#include<algorithm>

using namespace std;

int main(){
	int n;
	cin>>n;
	
	int a[n][n];
	
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[0][j] = 1;
			a[i][0] = 1;
			if(i>0 && j>0){
				a[i][j] = a[i-1][j]+a[i][j-1];
			}
		}
	}
	cout<<a[n-1][n-1];
	return 0;
}
