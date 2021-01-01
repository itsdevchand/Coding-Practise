/*	
	Write a program as in number 2 for extracting suffixs if a given string.
*/
	#include<iostream>
	#include<conio.h>
	using namespace std;
	string w;	
	void suffix(string w){
		int i,j;
		cout<<"The possible suffixes of the given string are: "<<endl;
		for(i=0;i<w.length();i++){
			for(j=i;j<w.length();j++){
				cout<<w[j];
			}
			cout<<endl;
		}
	}
	int main(){
		cout<<"Enter any string: ";
		cin>>w;
		suffix(w);
		getch();
	}

