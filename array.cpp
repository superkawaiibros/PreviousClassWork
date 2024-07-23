#include <iostream>
using namespace std;
int main(){
	int arr[12]={1,2,3,4,5,6,7,8,9,10,14,12};
	cout<<sizeof(arr)<<endl;

		for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
			if(arr[i]%2==0){
			
			cout<<"The element "<<arr[i]<<" is even."<<endl;
		}
		else{
			cout<<"The element "<<arr[i]<<" is odd."<<endl;
		}
	}
		cout<<"First element is "<<arr[0]<<endl;
		cout<<"First element is "<<arr[1]<<endl;
		cout<<"First element is "<<arr[2]<<endl;
		cout<<"First element is "<<arr[3]<<endl;
		cout<<"First element is "<<arr[4]<<endl;
		cout<<"First element is "<<arr[5]<<endl;
		cout<<"First element is "<<arr[6]<<endl;
		cout<<"First element is "<<arr[7]<<endl;
		cout<<"First element is "<<arr[8]<<endl;
		cout<<"First element is "<<arr[9]<<endl;
		cout<<"First element is "<<arr[10]<<endl;
		cout<<"First element is "<<arr[11]<<endl;

		return 0;
}
//4 bytes equals one number
//pass by value-function has a & in front of variable. Without the variable, it makes a copy.
//& means pass by reference. It passes the address to the variable, object or vector. 
//&vec will pass to myVec in Main Function. With just vec, it will make a copy when called.
