/*

	3. Implement a DFA to recognize C - identifiers.

*/
#include <stdio.h>
#include <ctype.h>

int transition(int state, char input){
	switch(state){
		case 0:
			if(isalpha(input) || input == '_'){
				state = 1;
			}
			else{
				state = 2;
			}
			break;
		case 1:
			if(isalpha(input) || input == '_' || isdigit(input)){
				state = 1;
			}
			else{
				state = 2;
			}
			break;
		case 2:
			state = 2;
			break;
	}
	return state;
}

int main(){
	int i = 0;
	int current_state = 0;
	int final_state = 1;

	char input[25];
	printf("Enter word:");
	scanf("%s", input);

	while(input[i] != '\0'){
		current_state = transition(current_state, input[i]);
		i++;
	}

	if(current_state == final_state){
		printf("The word %s is a valid C-identifier.\n",input);
	}
	else{
		printf("The word %s is invalid C-identifier.\n",input);
	}
	return 0;
}

