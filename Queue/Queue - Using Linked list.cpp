// Queue - Using Linked list
#include<iostream>
using namespace std;

struct node{
	int val;
	node *next;
};

node *front = NULL;
node *rear = NULL;

int peek();
bool isEmpty();
void enqueue(int data);
void dequeue();
void printQueue();

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
				enqueue(num);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				cout<<"Peek is "<<peek()<<endl;;
				break;
			case 4:
				printQueue();
				break;
		}
	}
}

int peek(){
	if(!isEmpty()){
		return front->val; 
	}
}

bool isEmpty(){
	if(front==NULL){
		return true;
	}else{
		return false;
	}
}

void enqueue(int data){
	node *temp = new node;
	temp->val = data;
	temp->next = NULL;
	if(front==NULL){
		front = temp;
	}else{
		node *current = front;
		while(current->next!=NULL){
			current = current->next;
		}
		current->next=temp;
	}
	rear=temp;
}

void dequeue(){
	int data;
	if(!isEmpty()){
		
		data = front->val;
		node *temp = front;
		front = front->next;
		delete temp;
		cout<<"Removed element is "<<data<<endl;
	}else{
		cout<<"List is Empty."<<endl;
	}
}

void printQueue(){
	node *current = front;
	if(!isEmpty()){
		while(current!=NULL){
			cout<<current->val<<" ";
			current= current->next;
		}
		cout<<endl;
	}
	
}


