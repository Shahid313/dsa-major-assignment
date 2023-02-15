#include<iostream>
using namespace std;

int main(){
	int i, u, p, m, t, ARR[4] = {4,19,1,13};
	
	for(u=0; u<3; u++){
		m=ARR[u];
		for(i=u; i<=3; i++)
		if(m>ARR[i]){
			m=ARR[i];
			p=i;
		}
		t=ARR[p];
		ARR[p] = ARR[u];
		ARR[u] = t;
	}
	
	cout<<"The sorted array "<<endl;
	for(i=0; i<=3;i++){
		cout<<ARR[i]<<endl;
	}
	return 0;
}
