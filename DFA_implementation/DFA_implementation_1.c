// Question 1
/*

	1. Implement a DFA that accepts strings over {0,1} which ends with 01.

*/

#include <stdio.h>
#include <stdlib.h>

int transition(int cs, char input){
	switch(cs){
		case 0:
			if(input == '0'){
				cs = 1;
			}
			else  if(input == '1'){
				cs = 0;
			}
			else{
				printf("Input not in {0,1}\n");
				exit(1);
			}
			break;
		case 1:
			if(input == '0'){
				cs = 1;
			}
			else  if(input == '1'){
				cs = 2;
			}
			else{
				printf("Input not in {0,1}\n");
				exit(1);
			}
			break;
		case 2:		
			if(input == '0'){
				cs = 1;
			}
			else  if(input == '1'){
				cs = 0;
			}
			else{
				printf("Input not in {0,1}\n");
				exit(1);
			}
			break;
	}
	return cs;
}

int main(){
	int i = 0;
	int final_state = 2;
	int current_state = 0;
	char input[25];

	printf("Enter word:");
	scanf("%s", input);

	while(input[i] != '\0'){
		current_state = transition(current_state, input[i]);
		i++;
	}
	if(current_state == final_state){
		printf("The word %s ends with 01\n",input);
	}
	else{
		printf("The word %s doesn't end with 01\n",input);
	}
	return 0;
}
