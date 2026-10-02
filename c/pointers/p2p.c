#include <stdio.h>

int main(void)
{
    int x = 10;

    int *p = &x;
    int **pp = &p;

    printf("x      = %d\n", x);
    printf("*p     = %d\n", *p);
    printf("**pp   = %d\n", **pp);

    printf("\nAddresses:\n");

    printf("&x     = %p\n", (void *)&x);
    printf("p      = %p\n", (void *)p);

    printf("&p     = %p\n", (void *)&p);
    printf("pp     = %p\n", (void *)pp);

    printf("\n Order: \n");
    printf("x = %d\n", x);
    printf("add of x, p = %p\n", p);
    printf("*p = %d\n", *p);
    printf("add of *p, pp = %p\n", pp);
    printf("p, *pp = %p\n", *pp);
    printf("**pp = %d\n", **pp);
    /*
        Change x through pp
    */
    **pp = 50;

    printf("\nAfter **pp = 50:\n");
    printf("x      = %d\n", x);
    printf("*p     = %d\n", *p);
    printf("**pp   = %d\n", **pp);
    printf("*pp   = %d\n", *pp);

    return 0;
}