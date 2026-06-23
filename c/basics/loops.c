#include <stdio.h>

int main(){
    int j=6;
    printf("i:\n");
    for(int i=1;i<=5;i++){
        printf("%d\n", i);
    }
    printf("j:\n");
    while(j<=10){
        printf("%d\n", j);
        j++;
    }
    return 0;
}