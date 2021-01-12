/*

    2. Implement a PDA accepting a string over {0,1} such that number of 0’s are followed
     by equal number of 1’s., acceptance by final state.

*/
#include <stdio.h>

#define MAX 25

int flag = 0;

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

void transition3(char word[], int input_pos, Stack *s){
    if(word[input_pos] == '\0' && isEmpty(s)){
        flag = 1;
    }
}

void transition2(char word[], int input_pos, Stack *s){
    if(word[input_pos] != '\0'){
        if((Top(s) == '0') && (word[input_pos] == '1')){
            pop(s);
            transition2(word, input_pos+1, s);
        }
    }
    else{
        if(Top(s) == 'z'){
            pop(s);
            transition3(word, input_pos, s);
        }
    }
}

void transition1(char word[], int input_pos, Stack *s){
    if(word[input_pos] != '\0'){
        switch(Top(s)){
            case 'z':
                if(word[input_pos] == '0'){
                    push(s, word[input_pos]);
                    transition1(word, input_pos+1, s);
                }
                break;
            case '0':
                if(word[input_pos] == '0'){
                    push(s, word[input_pos]);
                    transition1(word, input_pos+1, s);
                }
                else{
                    pop(s);
                    transition2(word, input_pos+1, s);
                }
                break;
        }
    }
}

int main(){
    char word[25];
    Stack *s, S;
    s = &S;
    createStack(s);
    printf("Enter word:");
    scanf("%s", word);
    push(s, 'z');
    transition1(word, 0, s);
    if(flag){
        printf("The word %s has equal number of 0's followed by equal number of 1's\n", word);
    }
    else{
        printf("The word %s doesn't have equal number of 0's followed by equal number of 1's\n", word);
    }
    return 1; 
}
