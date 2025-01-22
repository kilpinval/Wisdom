#include <stdlib.h>
#include <stdio.h>

int main(){
    int *array;
    
    array = malloc(10*sizeof(int));
    if(array == NULL){
    printf("hubo un error \n");
    exit(1);
    }
    printf("%d \n", *array);
    printf("%d \n", array[1]);
    return 0;
}