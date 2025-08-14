#include "tokenize.h"

//gpt code starts//
int tokenize_input(char *input, char *tokens[]) {
    int count = 0;
    char *token = strtok(input, " \t\n\r"); // Split by spaces, tabs, and newline
    while (token != NULL && count < MAX_TOKENS) {
        tokens[count++] = token;
        token = strtok(NULL, " \t\n\r");    //for telling to continue tokenizing same string
    }
    tokens[count] = NULL; // NULL-terminate the token array
    return count;
}
//gpt code ends;