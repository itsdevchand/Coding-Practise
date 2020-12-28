/*
	Write a program to find out substring according to user's request
	
	 a) make a function substrig2(w,a,b), where w is a string input given by user, a is the string position for extracting substring
	 and b is the number of symbols to be extracted.
*/
#include<iostream>
#include<conio.h>
using namespace std;
int a,b;
string w;	
void substring2(string,int,int);
int main(){
	cout<<"Enter any string: ";
	cin>>w;
	cout<<"Enter starting position for extracting substring: ";
	cin>>a;
	cout<<"Enter the number of symbols to be extracted: ";
	cin>>b;
	substring2(w,a,b);
	getch();
	return 0;
}
void substring2(string w,int a,int b){
	int num=a-1;
	cout<<"The substring is : "<<endl;
	for(int i=num;i<num+b;i++){
		cout<<w[i];
	}
}
