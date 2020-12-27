/*

	2. Implement a DFA that accepts strings over {0,1} that has even number of 0s and even number of 1s.

*/
#include <stdio.h>
#include <stdlib.h>

int transition(int state, char input){
	switch(state){
		case 0:
			if(input == '0'){
				state = 2;
			}
			else if(input == '1'){
				state = 1;
			}
			else{
				printf("Input not in {0,1}\n");
				exit(1);
			}
			break;
		case 1:
			if(input == '0'){
				state = 3;
			}
			else if(input == '1'){
				state = 0;
			}
			else{
				printf("Input not in {0,1}\n");
				exit(1);
			}
			break;
		case 2:
			if(input == '0'){
				state = 0;
			}
			else if(input == '1'){
				state = 3;
			}
			else{
				printf("Input not in {0,1}\n");
				exit(1);
			}
			break;
		case 3:
			if(input == '0'){
				state = 1;
			}
			else if(input == '1'){
				state = 2;
			}
			else{
				printf("Input not in {0,1}\n");
				exit(1);
			}
			break;
	}	
	return state;
}

int main(){
	int i = 0;
	int current_state = 0;
	int final_state = 0;

	char input[25];
	printf("Enter word:");
	scanf("%s",input);

	while(input[i] != '\0'){
		current_state = transition(current_state, input[i]);
		i++;
	}
	if(current_state == final_state){
		printf("The word %s has even number of 0s and even number of 1s\n",input);
	}
	else{
		printf("The word %s doesn't have even number of 0s and even number of 1s\n",input);
	}
	return 0;
}	

