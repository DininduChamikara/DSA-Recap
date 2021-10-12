// Stack - Using linked list
#include<iostream>
using namespace std;

struct node{
	int val;
	node *next;
};

node *head = NULL;

int peek();
bool isEmpty();
void push(int data);
void pop();
void printStack();

int main(){
	int ch;
	
	while(ch != 5){
		cout<<"\nEnter 1 to add a number\nEnter 2 to remove a number\nEnter 3 to get peek number\nEnter 4 to print the stack\nEnter 5 to exit\n\nEnter your choice : ";
		cin>>ch;
		
		switch(ch){
			case 1:
				int num;
				cout<<"Enter the number : ";
				cin>>num;
				push(num);
				break;
			case 2:
				pop();
				break;
			case 3:
				cout<<"Peek is "<<peek();
				break;
			case 4:
				printStack();
				break;
		}
	}
	
}

int peek(){
	if(!isEmpty()){
		return head->val;
	}
}

bool isEmpty(){
	if(head==NULL){
		return true;
	}
	else{
		return false;
	}
}

void push(int data){
	node *temp = new node;
	
	temp->val = data;
	temp->next = head;
	
	head = temp;	
}

void pop(){
	int data;
	if(!isEmpty()){
		node *temp = head;
		head = head->next;
		data = temp->val;
		delete temp;
		cout<<"Data element removed was "<<data<<endl;	
	}else{
		cout<<"No elements to remove."<<endl;
	}	
}

void printStack(){
	if(!isEmpty()){
		node *current = head;
		while(current!=NULL){
			cout<<current->val<<" ";
			current = current->next;
		}
		
	}else{
		cout<<"Stack has no data."<<endl;
	}
}



















