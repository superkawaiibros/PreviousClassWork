#include <iostream>
#include <string>
using namespace std;
int main(){
	string str1;
	str1="York College is the best in NY";
	cout<<str1.substr(2,27).find("the")<<endl;
	cout<<str1.at(3)<<endl;
	cout<<str1.at(11)<<endl;
	cout<<str1.at(16)<<endl;
	char ch;
	cout<<"Enter the letter t in lowercase."<<endl;
	cin>>ch;
	ch=toupper(ch);
	cout<<"Letter is in uppercase: "<<ch<<endl;
	cout<<"Enter the letter A in uppercase."<<endl;
	cin>>ch;
	ch=tolower(ch);
	cout<<"Letter is in lowercase: "<<ch<<endl;
}
