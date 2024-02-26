#include <bits/stdc++.h>
using namespace std;
int main(){
	int counter=0;
	string value;
	getline(cin,value);
	for(int i=0;i<value.size();i++){
		if((value[i]>='a'&&value[i]<='z')||(value[i]>='A'&&value[i]<='Z')){
			if((i==0||value[i-1]==' ')||(value[i-1]=='.')||(value[i-1]=='?')||(value[i-1]==',')||(value[i-1]=='!')){
				counter++;
			}
		}
	}
	cout<<counter;
	return 0;
}
	

