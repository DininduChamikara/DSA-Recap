// Circular Queue - Using Arrays
#include<iostream>
using namespace std;

int queue[5];
int front = -1;
int rear = -1;
const int MAXSIZE = 5;

int peek();
bool isEmpty();
bool isFull();
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
		return queue[front];
	}
}

bool isEmpty(){
	if(front<0){
		return true;
	}else{
		return false;
	}
}

bool isFull(){
	if((front==0 && rear==MAXSIZE-1) || front==rear+1){
		return true;
	}else{
		return false;
	}
}

void enqueue(int data){
	if(!isFull()){
		if(front==-1 && rear==-1){
			front = 0;
			rear = 0;
		}else if(rear==MAXSIZE-1){
			rear = 0;
		}else{
			rear++;
		}
		queue[rear] = data;
	}else{
		cout<<"Circular queue is Full."<<endl;
	}
}

void dequeue(){
	int data;
	if(!isEmpty()){
		data = queue[front];
		if(front==rear){
			front = -1;
			rear = -1;
		}else if(front==MAXSIZE-1){
			front = 0;
		}else{
			front++;
		}
		cout<<"Data element that removed is "<<data<<endl;
	}else{
		cout<<"Circular queue is empty."<<endl;
	}
}

void printQueue(){
	if(!isEmpty()){
		if(front<=rear){
			for(int i=front; i<rear+1; i++){
				cout<<queue[i]<<" ";
			}
		}else{
			for(int i=front; i<MAXSIZE; i++){
				cout<<queue[i]<<" ";
			}
			for(int i=0; i<=rear; i++){
				cout<<queue[i];
			}
		}
	}else{
		cout<<"Queue is empty."<<endl;
	}
}













