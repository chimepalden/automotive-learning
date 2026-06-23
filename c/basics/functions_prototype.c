/*
    Having function's prototype declared before `main()` allows to define functions after `main()`.
    This approach is very common in embedded C programming  and automotive codebases
    becuause it keeps `main()` near the top and puts the implementation details below it.
*/ 
#include <stdio.h>
#define MAX 100
/* Global variables */
/* Function prototypes */
void init(void);
void process(void);

int main(void) {
    init();
    process();
    return 0;
}

/* Function definitions */
void init(void) {
}

void process(void) {

}