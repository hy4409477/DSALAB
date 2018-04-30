#include<iostream>
using namespace std;
int size=20;
int a[20];
int top=-1;
void push(int x){
	if(top==(size-1)){
		cout<<"Error: stack overflow\n";
		return;
	}	
	a[++top]=x;
}
void pop(){
	if (top==-1){
		cout<<"no element to pop\n";
	}
	top--;
}
void display(){
	cout<<"The values are:"<<endl;
		for(int i=0; i<top+1;i++){
		cout<<a[i]<<endl;
}
}
int main(){
	int j;	
	abc: cout<<"===============";
	cout<<"Enter the value of selsction:\n";
	cout<<"1.Display\n";
	cout<<"2.push\n";
	cout<<"3.pop\n";
	cout<"================";
	cin>>j;
	switch(j){
		case 1:
			display();
			goto abc;
			break;
		case 2:
			int x;
			cout<<"Enter the value"<<endl;
			cin>>x;
			push(x);
			goto abc;
			break;
			case 3:
				pop();
				goto abc;
				
				break;
			default:
				cout<<"Please try again!!!!!!!!!";
	}
}
