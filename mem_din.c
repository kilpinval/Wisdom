#include <stdlib.h>
#include <stdio.h>

int main(){
    int n=10;
    char * p;
    p = malloc(n*sizeof(char));
    if(p == NULL){
    printf("hubo un error \n");
    exit(1);
       
    }else{
        printf("%p \n",*p);

    }
    return 0;
}