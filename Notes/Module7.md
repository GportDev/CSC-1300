# Functions

Block of code that can be reused along the program. It can receive arguments and return different types.

```cpp
// returnType name(parameters) {
//     statement;
// }
//
// functionName(arguments);


void makeCount() {
    cout << "The final countdown is 0." << endl;
}

```

In C++ is a good practice use functions before defining the body of it, because the core of the program is the `main()` function and you will use the other functions inside of it. So you can define functions prototypes `void function();` before use it and after the `main()` define the body of the additional functions.

```cpp
void function1();
void function2();

int main() {...}
```

You can put parameters (hold the values passed as arguments) in the function definitions, the order you define it will be the order you use it when calling the function.

```cpp
int sum(int a, int b) {
    return (a + b);
}

int main() {
    int total = sum(4, 5);

    cout << "The sum is: " << total << endl;
    return 0
}

```

<br/>
<br/>

## Returning a value from a functions
In C++ a functions can return ***ONE*** value back to the function call statement.

<br/>
<br/>

## Reference variables `&variable`
Is an alias (another name) for another variable

Reference variables as **parameter** allows a function to work with the original **argument** from the function call, not a copy of the argument.

Allows the function to modify values stored in the calling function.

Provides a way to return more than one value.

You can have unlimited number of reference variables in a function

`void function(int&);`

Changes to a reference variable are made to the variable it *refers*

> The argument name can be different in the calling, while the parameter is an alias of the same variable. The original value of the variable will change when the alias change.


```cpp
void doubleNum(int&);

int main() {
    int value = 4;
    doubleNum(value);
};

void doubleNum(int& num) { //Num only exists inside this block
    num *= 2;
}
```

<br/>
<br/>

## Overloaded functions
Functions that have the same name but get different parameters. Parameter list can be different in the data types or number of parameters.

```cpp
void getDimensions(int);
void getDimensions(int, int);
void getDimensions(int, double);
void getDimensions(double, double);
```

When the programer pass the parameters, the compiler will choose what overloaded function he had to use to make this work.

<br/>
<br/>

## Global constants

Global means that can be used at any part of the program. They are defined outside of or all functions.

Global variables make the code hard to debug. The only exception is for **global constants**

<br/>
<br/>

## Static Local variables

Local variables only exist while the function is executing. When the function terminates, the contents of local variables are lost.

**Static local variables** retain their contents between functions calls. They are defined and initialized **only at the first time the function is executed**.

```cpp
static int statNum = 0;
```

<br/>
<br/>

## User-defined header files

Files that are defined by the user and can be imported using `#include` too.

The `#includes` directs the compiler that the header file needs to be processed before compilation.

`#include "filename.h"`

- The `driver.cpp` file will be the file with the main function, an source code file. 


- Source files can include any header file. And several source files can include the same header file

- You can only include the header file once in the program. In order to not have errors, we use the Include guards.

```cpp
//referenceVars.h

#ifndef REFERENCEVARS_H
#define REFERENCEVARS_H

#include <iostream>
using namespace std;

void doubleNum(int&);

#endif
```

<br/>
<br/>

## Recursive algorithm

We call the function inside itself,

The base case will return a value without making any subsequent recursive call. Until the branch became false, the recursion will keep occur.

When a problem can be broken into successive smaller problems that are identical to the original, you can use recursion.



