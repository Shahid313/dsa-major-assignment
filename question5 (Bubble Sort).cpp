#include<iostream>
using namespace std;

int main(){
	
	int i,u,t;
	int ARR[4] = {4,19,1,3};
	
	for(u=3; u>=1; u--){
		for(i=0; i<u; i++){
		if(ARR[i] > ARR[i+1]){
			t=ARR[i];
			ARR[i] = ARR[i+1];
			ARR[i+1] = t;
		}
	}
	}
	
	
	cout<<"The sorted array is: "<<endl;
	for(i=0; i<=3; i++){
		cout<<ARR[i]<<endl;
	}
	
	return 0;
}
