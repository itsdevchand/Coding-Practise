/*	Write a program to display prefixes if a given string.
	a) make a function prefix1(w) where w is a string input given by user. This function has to display all the possible prefixes of a given string w.
*/
#include<iostream>
#include<conio.h>
using namespace std;
string w;	
void prefix1(string w){
	int i,j;
	cout<<"The possible prefixes of the given string are: "<<endl;
	for(i=w.length()-1;i>=0;i--){
		for(j=0;j<=i;j++){
			cout<<w[j];
		}
		cout<<endl;
	}
}
int main(){
	cout<<"Enter any string: ";
	cin>>w;
	prefix1(w);
	getch();
	return 0;
}

