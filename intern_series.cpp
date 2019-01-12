#include<bits/stdc++.h>
using namespace std;


long int func_series(int n,long int a[]){
	if(a[n]!=0)
		return a[n];
	else{
		a[n]=func_series(n-1,a)*2+func_series(n-2,a);
		return a[n];
	}	
	
}


int main(){
	int n;
	long int a[n];
	cin>>n;
	for(int i=0;i<n;i++)
		a[i]=0;
	n=n-1;
	a[0]=3;
	a[1]=5;
	cout<<func_series(n,a);
}
