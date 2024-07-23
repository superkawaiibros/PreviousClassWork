#include <iostream>
#include <stack>
#include <vector>
using namespace std;
/*
int main(int argc, const char=argv[]){
	list<int> myList={1,2,3,4,5,6};
	myList.insert(myList.begin())
}
*/
//Stack is a specialized list with the restriction that insertions and deletions can be performed at the end of the list (called top of stack)
//Last In First Out: Latest item added to the stack is the first item that can be removed from stack.
//Push (Place item on top of stack), Pop (Remove item from top of stack), and Top (examine item on top of stack without removing it) are major operations for Stack
int main(){
	stack<int> myStack;
	myStack.push(4);
	myStack.push(5);
	myStack.push(8);
	myStack.pop();
	myStack.push(9);
	myStack.push(8);
	myStack.push(7);
	myStack.pop();
	myStack.pop();
	cout<<"Size of my stack is: "<<myStack.size()<<".";
	cout<<endl;
	cout<<"Top of my stack is: "<<myStack.top()<<".";
	}
