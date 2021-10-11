// Stack - using arrays
#include<iostream>
using namespace std;

int stack[5];
const int MAXIMIZE = sizeof(stack)/sizeof(stack[1]);
int top = -1;

int peek();
bool isFull();
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
	return stack[top];
}

bool isFull(){
	if(top == MAXIMIZE - 1){
		return true;
	}else{
		return false;
	}
}

bool isEmpty(){
	if(top==-1){
		return true;
	}else{
		return false;
	}
}

void push(int data){
	if(isFull()){
		cout<<"Stack is overflow"<<endl;
	}else{
		top++;
		stack[top] = data;
	}
}

void pop(){
	int data;
	if(!isEmpty()){
		data = stack[top];
		top --;
		cout<<data<<" removed."<<endl;
				
	}else{
		cout<<"Stack is empty."<<endl;
	}
}

void printStack(){
	for(int i=top; i>=0; i--){
		cout<<stack[i]<<" ";
	}
	cout<<endl;
}
