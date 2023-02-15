#include<iostream>
using namespace std;

int main(){
	
	int stack[10];
	int top = -1;
	char option;
	
	do{
		if(top == sizeof(stack)/sizeof(int) - 1){
		cout<<"\nThe stack is already full new element cannot be pushed"<<endl;
		break;
	}else{
		top++;
		cout<<"Please enter an element: ";
		cin>>stack[top];
		cout<<"Do you want to insert another element (y/n): ";
		cin>>option;
		
	}
	}while(option == 'y' || option == 'Y');
	
	
	cout<<"The available elements in stack: "<<endl;
	
	while(top > -1){
		cout<<stack[top]<<endl;
		top--;
	}
	
	return 0;
}
