## 1st Program - Sep 20

- Ten question for a personality test.
- The answer will result in an type of donut
- Write 6 ORIGINAL questions
- File name -> yourusername_prog1.cpp
- Submit just the source file zip in a folder (username_prog1.zip)

# Module 3
## Data types & arithmetic expressions

In C++ the variables should be defined before use it.

| DATA TYPE   | TYPICAL SIZE | TYPICAL RANGE                 |
|-------------|--------------|-------------------------------|
| char        | 1 byte       | -1280 to 127                  |
| short       | 2 bytes      | -32,768 to 32,767             |
| int         | 4 bytes      |-2,147,483,648 to 2,147,483,647|
| unsigned int| 4 bytes      | 0 to 4,294,967,295            |
| float       |              |                               |
| double      |              |                               |
| long double |              |                               |

You can assign a initial value to a variable when difined
`int userAge = 0;`

```cpp

int numApples; // defining the variable
numApples = 8; // Assignment statement

int width, height, dept = 2, num = 48;

```

### Constant variables

Variables you don't want to have the value subscribed in any part of the code.
CAPS and underscores are good pratice for constants

```cpp

const double SALES_TAX = 9.75;
const double SPEED_OF_LIGHT = 761.207;

```

### Char - Characters

Only one character, letter, number, symbol
They are assigned in **SINGLE QUOTES**

```cpp

char middleInitial = 'D';

```

## Strings

Strings are assigned with **DOUBLE QUOTES**
They need the `#include <string> or #include <iostream>`

|Definition|Meaning|
|---|---|
|string name;| Defines an empity string|
|string myname("Gabriel");| Defines and initialize it|
|string yourname(myname)|Defines a string an initialize it|
|string yourname(myname, 3)|Defines a string an initialize it with the first 3 chars of the variable|
|string yourname(myname, 3, 2)|Defines a string and initialize it with 2 chars, beginning at the position 3 of the string array|

### String inputs

```cpp
cout << "What is your name? ";
cin >> name;

// For strings with white spaces

cout << "What is your name? ";
getline(cin, name);

```

The getline function will get all the input until a \n (ENTER)

When you go from `cin >> variable` to `getline(cin, name)` the extraction operator will catch all the keyboard buffer, so the \n in the end of the line will be saved in the memory too.

You can use the `cin.ignore()` to avoid the \n from the >> operator

You HAVE to use extraction to get int, **getline only works for strings**

For C++ the good pattern is Camel Case, but you can use Snake Case too.



# Arithmetic Operators

|Symbol|Operation|
|---|---|
|+| Addition|
|-| Minus|
|*| Multiply|
|/| Division|
|%| Module (Rest)|

### Order of execution

### Integer division

The result ever be an Integer, the decimal will be dropped

# C++ math library

`#include <cmath>`

Has 20 math operations called functions

# C++ Standard library (cstdlib)

This is one of the widely used functions.

Math functions, conversion functions (types), generate random numbers, searching and sorting, and constants.

### Random number generation

`rand()` return a pseudo-random number integer each time that it's called. The number is machine dependant, so more powerful the processor, bigger the number. This function uses a seed, that can make the function return the same numbers.

So, you can use `srand()` to use a different seed, it will be re-generate the numbers. The best way is use the time as the seed.

For this, use the lib `<ctime>`

The function time()

```cpp

#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); //Just one time

    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;

    return 0;
}

```

To determine the range
- Determine the range you want
- Determine the number of values in the range (Ex: 6 values)
- Generate a random integer with that number of values `rand() % 6`
- Add x to adjust the range to start with x ()

### Integer limits library (limits)

Provides information's about the limits of a data.
min and max...




# Data Type conversions

Operations can only be performed between operands of the same type. If they are different, C++ will automatically convert one of them to match the other (implicit conversion) The conversion will exist only in the line of the operation. The original type will not change.
- Conversions are made by hierarch
1. long double
2. double
3. float
4. long


### Rules

1. Char and short automatically promoted to int
2. The lower always is promoted to the higher one
3. When using `=` the right hand will be converted to the left hand

PS: Doubles and floats always will truncate (Floor)

## Type casting

Manually change the type a variable in a statement

```cpp
    int myIntVar = 7;
    cout << static_cast<double>(myIntVar);
```

# Formatting numerical output

### Floating-point numbers
```cpp
 #include <iomanip>
```

|Operator|For what?|
|----|----|
|`fixed`|Fixed floating point, not scientific|

You need to write `fixed` just once. After that, just set precision for every statement you want.

When you use a manipulator like fixed or scientific, you can define the digits _**after dot**_, `setPrecision(p)` setting the maximum digits.

If you use the `setPrecision(p)` without the manipulator, it will set the total amount of digits to `p`

# WARNING `#include <bits/stdc++.h>`

This library add all the C++ libraries to you code, it increase the compilation time a lot, and only make sense to use if you are in a code competition.