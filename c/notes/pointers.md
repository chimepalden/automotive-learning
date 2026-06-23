# Pointers
A pointer is a variable which stores the memory address of another variable.
<pre>
int x =10;
int *p = &x;</pre>
- `p` is the pointer.
- `*p` is called dereferencing the pointer, `p`.
- `*p` gives dereferenced value, value at address stored in pointer, `p`.
- Dereference means follow the reference(address) to get the actual data.
- `*` indirection/dereference operator.

## * in declaration and * in expression
- Declaration: `int *p;`. `p` is pointer to an `int`. Here, `*` is part of the type declaration and it is not accessing memory.
- In Expression: `*p = 20;`. `*` means "deference". Here, `*` is an operator and it accesses memory.   

- `p` stores the address of the memory location where an int is stored.
- `*p` is an int.

## Pointers in automative C programming

## Pointers use cases in automotive/emdedded C programming
