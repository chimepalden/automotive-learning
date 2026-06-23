#include <stdio.h>
#include <string.h>

int main() {
    int nums[3] = {10, 20, 30};
    char name[10];
    strcpy(name, "chime");
    printf("%d\n", nums[1]);
    
    int length = sizeof(nums)/sizeof(nums[0]);
    printf("%d\n", length);
    
    for(int i=0;i<=length-1;i++){
        printf("%d ", nums[i]);
    }
    
    printf("\n%s", name);
    return 0;
}