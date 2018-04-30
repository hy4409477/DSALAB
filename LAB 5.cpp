#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

struct node{
	int data;
	node* next;
};

node* head = NULL;

void insert(int item){
	node *NewNode = (node*) malloc(sizeof(node));
	NewNode -> data = item;
	NewNode -> next = head;
	head = NewNode;
	cout<<"\n\nData Inserted Successfully!";
}
void Delete(int n)
{
	struct node* temp1=head;
	if(n == 1){
		head = temp1 -> next;
		free(temp1);
			return;
	}

int i;
for(i=0;i<n-2;i++){
	temp1 = temp1->next;
	}
struct node* temp2=temp1->next;
temp1->next=temp2->next;
free(temp2);
}


void display(){
	if(head == NULL){
		cout<<"\n\nError: Empty List!";
		return;
	}
	node *NewNode = (node*) malloc(sizeof(node));
	NewNode = head;
	cout<<"\n\nData in the List:\n\n";
	while(NewNode != NULL){
		cout<<NewNode -> data<<" ";
		NewNode = NewNode -> next;
	}
	getch();
}

int main(){
	int choice, item, position;
	up:
	system("cls");
	cout<<"\n\n\tCHOOSE FROM THE FOLLOWING:";
	cout<<"\n\n\t1. Insert Data in the List";
	cout<<"\n\t2. Display Data of the List";
	cout<<"\n\t3. Delete Data of the List";
	cout<<"\n\t4. Exit\n\n\t";
	cin>>choice;
	if(choice == 1){
		cout<<"\n\nEnter a value: ";
		cin>>item;
		insert(item);
		goto up;
	}
	else if(choice == 2){
		display();
		goto up;
	}
	else if(choice == 3){
		cout<<"\n\nEnter Position to Delete: ";
		cin>>position;
		Delete(position);
		goto up;
	}
	else if(choice == 4){
		exit(0);
	}
	else{
		cout<<"\n\nWRONG CHOICE!";
		goto up;
	}
	return 0;
	
}

 
