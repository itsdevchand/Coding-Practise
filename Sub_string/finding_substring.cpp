/*
	Write a program to find out substring according to user's request
	
	 a) make a function substrig1(w,a,b), where w is a string input given by user, a is the string position for extracting substring
	 and b is the ending position of the substring.
*/
#include<iostream>
#include<conio.h>
using namespace std;
int a,b;
string w;	
void substring1(string,int,int);
int main(){
	cout<<"Enter any string: ";
	cin>>w;
	cout<<"Enter starting position for extracting substring: ";
	cin>>a;
	cout<<"Enter ending position of string: ";
	cin>>b;
	substring1(w,a,b);
	return 0;
}
void substring1(string w,int a,int b){
	cout<<"The substring is : "<<endl;
	for(int i=a-1;i<b;i++){
		cout<<w[i];
	}
}


