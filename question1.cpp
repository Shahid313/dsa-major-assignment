#include<iostream>
using namespace std;

int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	
	int EvenNumSum = 0;
	int oddNumSum = 0;
	int i=0;
	
	while(i<10){
		
		if(arr[i] % 2 == 0){
			EvenNumSum = EvenNumSum + arr[i];
			cout<<"The location of even number "<<arr[i]<<" is "<<i<<endl;
		}else{
			oddNumSum = oddNumSum + arr[i];
			cout<<"The location of odd number "<<arr[i]<<" is "<<i<<endl;
		}
		
		i++;
		
	}
	
	cout<<"The sum of even numbers: "<<EvenNumSum<<endl;
	cout<<"The sum of odd numbers: "<<oddNumSum<<endl;
	
	return 0;
}
