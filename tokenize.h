#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<pwd.h>

#define MAX_TOKENS 100
#define MAX_LEN 256

int tokenize_input(char* input,char* tokens[]);