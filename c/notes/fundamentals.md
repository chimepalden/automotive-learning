# Basics
Basic C program structure:
<pre>
#include <stdio.h>
int main() {
    printf("Hello World!");
    return 0;
}
</pre>
Key parts:
- `include <stdio.h>` library for input/output
- `main()` program strats here
- `printf()` prints output
- `return 0;` program ends successfully
- function, `main()` must return an integer. Thus, `return 0;`

## Variables and Data types
C is statically typed, type is fixed at compile time.
C implicityly converts the data when data type dont match.
This causes data loss and therefore, wrt `automation`, MISRA C often resticts implicit conversions.

Variables must be declared before use.
Every variable must have a type.

Common types:
- int
- float
- char

Format specifiers:
- `%d`  int
- `%f`  float/double
- `%c`  char
- `%s`  str
- `%p`  pointer/address
- `%x`  hexadecimal
- `%ld` long

*Important*

When using:
- `printf()`: `%f` is used both for `float` and `double`.
- `scanf()`: `%f` reads `float` and `%lf` reads `double`.

## Operators
- `+` addition
- `-` subtraction
- `/` division
    - interger division
    - decimal division
## Loops
- for loop
- while loop

if-else is called conditional statement

## Functions
- Functions must be declared before use.
- Functions are usually defined before `main()`
- Global variables are declared before functions that use them.
- `main()` must return an interger.
- Functions can be defined after `main()` if that function's prototype is declared before `main()`.
- Especially in embedded C, the approach, using prototype before `main()` is common.
- `Forward declaration` is the term commonly use for function prototype approach.

## Arrays
- To store multiple values.
- Index starts with 0.
- An array is not assignable in C, Arrays cannot be assigned after declaration.
- Array can be initialization in 2 ways:
    - Initialization at declaration(when known at compile time).
    `char name[10] = "John";`
    - Delcare then copy(when known only at runtime).
    <pre>
        char name[10];
        strcpy(name, "John");</pre>
    `strcpy` works only for `char[]` treated as strings.
    A string is a char array that ends with `\0`.
    So, the `name` in memory: `J` `o` `h` `n` `\0`

- All elements in an array must be of same data type.
    
## Strings
- Strings are character arrays that ends with null terminator, `\0`.
- A char array stores the null teminator in memory if the char array is initialized/assigned with string literal, `char str[] = "John"`.
- Compilar automatically adds `\0` to the char array at the end.
- So, the string length same or longer than fixed char array size will cause
buffer overflow.

Buffer overflow causes:
- Corruption of nearby variables:
    over-writing the nearby memory corrupts its value.
- Progarm behaves incorrectly.
- Stack corruption:
    program may jump to wrong code by function returning overwritten address.
- Program crash: 
    when os detects illegal access.
- Security vulnerability:
    buffer overflow attacks.

# Pointers
Critical for embedded jobs.

Learn:
<pre>
int x = 10;
int *ptr = &x;
</pre>

Underdstand:
- Address
- Dereference
- Pointer arithmetic

# Memory
- Stack
- Heap
- Static memory

# Structures
<pre>
struct SensorData
{
    int speed;
    float temperature;
};
</pre>
Automotive code uses structs everywhere.

# Bit manipulation
Very important
<pre>
status |= (1 << 3);
status &= ~(1 << 3);
</pre>
Used for:
- CAN signals
- Registers
- Diagnostics