#include <bits/stdc++.h>
using namespace std;
int main(){
	int sockSize;
	cin>>sockSize;
	int arr[sockSize+1]= {0};
	if(sockSize==1){
		int s1,s2;
		cin>>s1>>s2;
		cout<<1;
		return 0;
	}
	int counter=0,pointer=0;
	for(int i=0;i<sockSize*2;i++){
		int sockNum;
		cin>>sockNum;
		if(arr[sockNum]==0){
			arr[sockNum]++;
			pointer++;
			counter=max(counter,pointer);
		}else{
			pointer--;
		}
	}
	cout<<counter;
}
	

