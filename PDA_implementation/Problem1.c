/*
	1. Implement a PDA accepting a string over {0,1} such that number of 0’s and 1’s are equal.

	i.e. L={w | w ε {0,1}* and 0’s and 1's are equal}, acceptance by empty stack.
*/
#include <stdio.h>

#define MAX 25

struct stack{
	char items[MAX];
	int top;
};

typedef struct stack Stack;

void createStack(Stack *s){
	s->top = -1;
}

int isEmpty(Stack *s){
	if(s->top == -1){
		return 1;
	}
	return 0;
}

int isFull(Stack *s){
	if(s->top == MAX - 1){
		return 1;
	}
	return 0;
}

void push(Stack *s, char state){
	if(!isFull(s)){
		s->items[++(s->top)] = state;
	}
}

void pop(Stack *s){
	if(!isEmpty(s)){
		s->top--;
	}
}

char Top(Stack *s){
	return s->items[s->top];
}


int main(){
	int i = 0;
	char word[25];
	Stack *s, S;
	s = &S;
	createStack(s);
	printf("Enter word:");
	scanf("%s", word);
	push(s, 'z');
	while(word[i] != '\0'){
		switch(Top(s)){
			case 'z':
				push(s, word[i]);
				break;
			case '0':
				if(word[i] == '0'){
					push(s, word[i]);
				}
				else{
					pop(s);
				}
				break;
			case '1':
				if(word[i] == '1'){
					push(s, word[i]);
				}
				else{
					pop(s);
				}
				break;
		};
		i++;
	}
	if(Top(s) == 'z'){
		pop(s);
	}
	
	if(isEmpty(s)){
		printf("The word %s has equal number of 0's and 1's.\n", word);
	}
	else{
		printf("The word %s does not have equal number of 0's and 1's.\n", word);
	}
	return 0;
}
