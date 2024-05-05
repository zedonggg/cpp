**Statements**
- Declaration Statements
- Jump statements
- Expression statements
- Compound statements
- Selection statements (conditionals)
- Iteration statements (loops)
- Try blocks


**Every C++ program must have a special function named `main`. Statements inside `main` are executed in sequential order**


## Dissecting Hello World
```cpp
#include <iostream>

int main()
{
   std::cout << "Hello world!";
   return 0;
}
```
`std::cout` stands for character output from the standard library and the << operator displays information on the console.


**Comment code liberally, and write comments as if speaking to someone who has no idea what the code does**


## Objects and Variables
When we run a program the OS loads the program into RAM. The OS reserves some additional RAM for the program to use while running.

An **object** is a region of storage (usually memory) that can store a value and has other associated properties. An object with a name (identifier) is called a **variable**

C++ is **strongly-typed** and variable type cannot be changed at runtime.

It is possible to define multiple variables of the **same type** in a single statement as follows:
```cpp
int a;
int b;
```
is the same as :
```cpp
int a, b;
```
However, it is still good practice to declare each var in a separate statement and line.


## Initialization and assignment
Many ways to initialize variables in cpp:
```cpp
int a;         // no initializer (default initialization)
int b = 5;     // initial value after equals sign (copy initialization)
int c( 6 );    // initial value in parenthesis (direct initialization)

// List initialization methods (C++11) (preferred)
int d { 7 };   // initial value in braces (direct list initialization)
int e = { 8 }; // initial value in braces after equals sign (copy list initialization)
int f {};      // initializer is empty braces (value initialization)
```

Prefer to use the 3 types of list initialization as it is more efficient. List initialization also catches narrowing conversions instead of rounding off the information. Eg trying to initialize an int to 4.5 will produce an error using list initialization, but regular initialization will just truncate to 4.

``int width {}; // value initialization / zero initialization to value 0``
This initializes the value to the zero value (or empty) rather than uninitialized

Reference for multiple variable initializaiton
```cpp
int a = 5, b = 6;          // copy initialization
int c( 7 ), d( 8 );        // direct initialization
int e { 9 }, f { 10 };     // direct brace initialization
int g = { 9 }, h = { 10 }; // copy brace initialization
int i {}, j {};            // value initialization
```


C++17 onwards : `[[maybe_unused]]` attribute
Consider the case where we have a bunch of math/physics values that may not get used. We can add the attribute in front of the variable type to indicate it might be unused as follows : 
```cpp
int main()
{
    [[maybe_unused]] double pi { 3.14159 };
    [[maybe_unused]] double gravity { 9.8 };
    [[maybe_unused]] double phi { 1.61803 };

    // the above variables will not generate unused variable warnings

    return 0;
}
```


## Intro to iostream: cout, cin, and endl
**std::cout**
standard charater output to send data to console to be printed as text. Can also print strings, numbers, variables

```cpp
#include <iostream> // for std::cout

int main()
{
    std::cout << 4; // print 4 to console

    return 0;
}
```
This produces `4`

```cpp
#include <iostream> // for std::cout

int main()
{
    int x{ 5 }; // define integer variable x, initialized with value 5
    std::cout << x; // print value of x (5) to console
    return 0;
}
```
This produces `5`

You can concatenate multiple items in a single line by chaining >>
```cpp
#include <iostream> // for std::cout

int main()
{
    int x{ 5 };
    std::cout << "x is equal to: " << x;
    return 0;
}
```
This produces `x is equal to: 5`