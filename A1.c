#include "A1.h"

void computername(char* res,char* shellcwd){
    char systemname[1024];
    gethostname(systemname,sizeof(systemname));
    char *username=getenv("USER");
    // char res[1024];
    strcpy(res,username);
    char home[1024];
    getcwd(home,sizeof(home));

    char address[1024];
    int temp=strncmp(shellcwd,home,strlen(home));


    strcat(res,"@");
    strcat(res,systemname);
    strcat(res,":");
    if(temp){
        strcat(res,shellcwd);
    }else{
        strcat(res,"~");
        strcat(res,shellcwd+strlen(home));   
    }
}