# Functions

Block of code that can be reused along the program. It can receive arguments and return different type of things.

```cpp
// returnType name() {
//     statement
// }

void makeCount() {
    cout << "The final countdown is 0." << endl;
}

```

In C++ is a good practice use a functions before defining the body of it, you can define this function prototype `void function();` before use it and after that define the body of the function. This is because of main function is the "main" function of the program.

```cpp
void function1();
void function2();

int main() {}
```

You can put parameters in the function definitions, the order you define it will be the order you use it when calling the function.

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

## Returning a value from a functions

In C++ a functions can return ONE value back to the function call statement.

## Reference variables

## Overloaded functions

Functions that have the same name but get different parameters

```cpp
void getDimensions(int);
void getDimensions(int, int);
void getDimensions(int, double);
void getDimensions(double, double);
```

When the programer pass the parameters, the compiler will choose what overloaded function he had to use to make this work.

## Global constants & static local variables

Global means that can be used at any part of the program. They are defined outside of the main function (or all functions).

Global variables make the code hard to debug. The only exception is for **global constants**

### Local functions

Local functions only exist while the function is executing. When the function terminates, the contents of local variables are lost.

**Static local variables** retain their contents between functions calls. They are defined and initialized **only at the first time the function is executed**.

```cpp
static int statNum = 0;
```

## User-defined header files

Files that are defined by the user and can be imported using `#include` too.

`#include "filename.cpp"`

The driver.cpp file will be the file with the main function.

You can only include one source file in each file. In order to not have errors, we use the Include guards.

```cpp
#ifndef REFERENCEVARS_H
#define REFERENCEVARS_H

#include <iostream>
using namespace std;

void doubleNum(int&);

#endif
```


## Recursive algorithm

We call the function inside itself,

The base case will return a value without making any subsequent recursive call. Until the branch became false, the recursion will keep occur.



