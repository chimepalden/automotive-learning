# Typical order of a C source file
A common layout:
<pre>
#include <stdio.h>          // Headers
#define MAX 100             // Macros
int global_var;             // Global variables
void helper(void);          // Function prototypes / forward declarations

int main(void)              // Main function 
{
    helper();
    retunr 0;
}

void helper(void)           // Function definitions
{
    printf("Hello\n");
}
</pre>

## 3 rules
1. Delclare variables before using them.
2. Declare functions before calling them.
3. Inlcude the correct header before using library functions.

For embedded/automotive C development, mastering the above 3 rules and
the scope(local/global variables) and header/source file organization(`.h`and`.c`)
should be high priority.