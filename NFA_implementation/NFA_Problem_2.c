/*

    Implement an NFA that accepts all the strings
    containing 001 as substring

*/

#include <stdio.h>
#include <string.h>

int flag = 0;

void transition4(char word[], int input_pos, int wordlen){
    flag = 1;
}

void transition3(char word[], int input_pos, int wordlen){
    if(input_pos != wordlen){
        if(word[input_pos] == '1'){
            transition4(word, input_pos+1, wordlen);
        }
    }
}

void transition2(char word[], int input_pos, int wordlen){
    if(input_pos != wordlen){
        if(word[input_pos] == '0'){
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

    char word[25];  // array for assign words
    int wordlen;
    printf("Enter string: ");
    scanf("%s", word);
    wordlen = strlen(word);
    transition1(word, 0, wordlen);
    if(flag){
        printf("\nThe string %s has a substring with 001.\n", word);
    }
    else{
        printf("\nThe string %s does not have a substring with 001.\n", word);
    }
    return 0;
}
