// problem 1 
/*
    Implement an NFA that accepts all the strings

    1. ending with 01 over {0,1}
*/
#include <stdio.h>
#include <string.h>

int flag = 0;

void transition3(char word[], int input_pos, int wordlen){
    if(input_pos == wordlen){
        flag = 1;
    }
}

void transition2(char word[], int input_pos, int wordlen){
    if(input_pos != wordlen){
        if(word[input_pos] == '1'){
            transition3(word, input_pos+1, wordlen);
        }
    }
}

void transition1(char word[], int input_pos, int wordlen){
    if(input_pos != wordlen){
        if(word[input_pos] == '0'){
            transition1(word, input_pos+1, wordlen);
            transition2(word, input_pos+1, wordlen);
        }
        else{
            transition1(word, input_pos+1, wordlen);
        }
    }
}

int main(){

    char word[25]; // array to assign a input words
    int wordlen;
    printf("Enter string: ");
    scanf("%s", word);
    wordlen = strlen(word);
    transition1(word, 0, wordlen);
    if(flag){
        printf("\nThe string %s ends with 01.\n", word);
    }
    else{
        printf("\nThe string %s does not end with 01.\n", word);
    }
    return 0;
}
