#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int testCases;
	int arr[4];
	cin>>testCases;
	while(testCases--){
		for(int i=0;i<4;i++){
			cin>>arr[i];
		}
		map<int,string> run;
		run.insert(pair<int,string>(arr[0],"Hussien")); // 14 : Hussien
		run.insert(pair<int,string>(arr[1],"Atef"));// 9 : Atef
		run.insert(pair<int,string>(arr[2],"Karemo"));// 2 : Karemo
		run.insert(pair<int,string>(arr[3],"Ezzat"));// 5 : Ezzat
		//  0 1 2 3
		//  2 5 9 14
		sort(arr,arr+4);
		
		map<int,string>::iterator fir = run.find(arr[3]);
		map<int,string>::iterator sec = run.find(arr[2]);
		cout<<fir->second<<" "<<sec->second<<endl;
		
		
	}
	
}
	

