#include <bits/stdc++.h>
using namespace std;

void pre(long long arr[],long long size,long long arrPrefix[]){
	arrPrefix[0]=arr[0];
	for(int i=1;i<size;i++){
		arrPrefix[i]=arrPrefix[i-1]+arr[i];
	}
}
int main(){
	long long size,q,first_index,second_index;
	cin>>size>>q;
	long long arr[size];
	long long arrPrefix[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	pre(arr,size,arrPrefix);
	while(q--){
		cin>>first_index>>second_index;
		if(first_index==1){
			cout<<arrPrefix[second_index-1]<<endl;
		}else{
			cout<<arrPrefix[second_index-1]-arrPrefix[first_index-2]<<endl;
		}
	}
}
	

