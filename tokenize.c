#include "tokenize.h"

//gpt code starts//
int tokenize_input(char *input, char *tokens[]) {
    int count = 0;
    char *token = strtok(input, " \t\n\r;"); // Split by spaces, tabs, and newline
    while (token != NULL && count < MAX_TOKENS) {
        char* semi = strchr(token,';');
        if(semi){
            if(semi!=token){
                char before[1024];
                strncpy(before,token,semi-token);
                before[semi-token]='\0';

                tokens[count++]=before;
            }
            tokens[count++]=";";

            if(*(semi+1)!='\0'){
                tokens[count++]=semi+1;
            }
        }else{
            tokens[count++]=token;
        }
        token = strtok(NULL, " \t\n\r");    //for telling to continue tokenizing same string
    }
    tokens[count] = NULL; // NULL-terminate the token array
    return count;
}
//gpt code ends;