// Queue - Using Arrays
#include<iostream>
using namespace std;

int queue[5];
int front = -1;
int rear = -1;
int MAXSIZE = 5;

int peek();
bool isEmpty();
bool isFull();
void enque(int data);
void deque();
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
				enque(num);
				break;
			case 2:
				deque();
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
	if(front<0 || front>rear){
		return true;
	}else{
		return false;
	}
}

bool isFull(){
	if(rear == MAXSIZE-1){
		return true;
	}else{
		return false;
	}
}

void enque(int data){
	if(!isFull()){
		if(front==-1){
			front = 0;
		}
		rear++;
		queue[rear]=data;
	}
}

void deque(){
	int data;
	if(!isEmpty()){
		data = queue[front];
		front++;
		cout<<"Removed data is "<<data<<endl;
	}else{
		cout<<"No element to remove."<<endl;
	}	
}

void printQueue(){
	for(int i=front; i<=rear; i++){
		cout<<queue[i]<<" ";
	}
	cout<<endl;
}

