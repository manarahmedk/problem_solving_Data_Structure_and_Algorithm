#include <bits/stdc++.h>
using namespace std;
int main(){
	int size,size2;
	cin>>size>>size2;
	int arrMinus[size2+1]= {0},arrPlus[size2+1]= {0};
	for(int i=0;i<size;i++){
		int x;
		cin>>x;
		if(x<0){
			arrMinus[x*-1]=1;
		}else{
			arrPlus[x]=1;
		}
	}
	for(int i=0;i<size;i++){
		int x;
		cin>>x;
		if(x<0){
			arrMinus[x*-1]=1;
		}else{
			arrPlus[x]=1;
		}
	}
	for(int i=size2;i>=0;i--){
		if(arrMinus[i]==0){
			cout<<-i<<endl;
			return 0;
		}
	}
	for(int i=0;i<=size2;i++){
		if(arrPlus[i]==0){
			cout<<i<<endl;
			return 0;
		}
	}
}
	

