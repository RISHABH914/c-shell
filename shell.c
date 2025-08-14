#include "A1.h"
#include "tokenize.h"
#include "shell.h"
#include "A3.h"
// #include<pwd.h>
// #include<unistd.h>
int main(){
    char systemname[1024];
    gethostname(systemname,sizeof(systemname));
    char *username=getenv("USER");

    char home[1024];
    getcwd(home,sizeof(home));      // directory of shell code
    char shellcwd[1024];        //cwd of c shell
    strcpy(shellcwd,home);

    while(1){
    //// A1 starts  /////
    char res[1024];
    computername(res,shellcwd);
    printf("<%s>",res);
    ///// A1 ends  /////


    ///// A2 stats /////
    char intake[1024];
    scanf(" %[^\n]s",intake);

    ////  A2 ends  /////
    
    // tokenising the input as per spaces tabs newlines and \r
    char *tokens[MAX_TOKENS];
    int token_cnt=tokenize_input(intake,tokens);
    
    //// A3 starts /////
    if(check(tokens,token_cnt)){
        printf("done\n");
    }else{
        printf("Invalid Syntax\n");
    }
    //// A3 ends  //////

    }
    
}