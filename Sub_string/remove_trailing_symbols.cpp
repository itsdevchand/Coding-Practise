/*	Write a program to display prefixes if a given string.
	a) make a function prefix2(w) where w is a string input given by user and n is the number of the number of trailing symbols to be removed from the string.
*/
#include<iostream>
#include<conio.h>
using namespace std;
string w;	
int n;
void prefix2(string w,int n){
	int i,j;
	cout<<"The resulting string is : "<<endl;
	for(i=0;i<w.length()-n;i++){
		cout<<w[i];
	}
}
int main(){
	cout<<"Enter any string: ";
	cin>>w;
	cout<<"Enter the number of trailing symbols to be removed from the string: ";
	cin>>n;
	prefix2(w,n);
	getch();
	return 0;
}

