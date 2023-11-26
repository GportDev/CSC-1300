# Module 3
## Data types & arithmetic expressions

In C++ the variables should be defined before use it. Also, they can not contain a value larger than the maximum supported by variable's data type.

| DATA TYPE   | TYPICAL SIZE | TYPICAL RANGE                 |
|-------------|--------------|-------------------------------|
| char        | 1 byte       | -1280 to 127                  |
| short       | 2 bytes      | -32,768 to 32,767             |
| int         | 4 bytes      |-2,147,483,648 to 2,147,483,647|
| unsigned int| 4 bytes      | 0 to 4,294,967,295            |
| float       |              |                               |
| double      |              |                               |
| long double |              |                               |

You can **assign** a initial value to a variable while defining it: <br/>
`int userAge = 0;`

<br/>

```cpp

int numApples; // defining the variable
numApples = 8; // Assignment statement

int width, height, dept = 2, num = 48;

```

<br/>

### Constant variables
Variables you don't want to have the value subscribed in any part of the code. <br/>

CAPS and underscores are good practice for constants

```cpp
const double SALES_TAX = 9.75;
const double SPEED_OF_LIGHT = 761.207;
```

<br/>

## Char - Characters

Only one character, letter, number, symbol <br/>
They are assigned in **SINGLE QUOTES**

```cpp
char middleInitial = 'D';
```

<br/>
<br/>

## Strings
Strings are assigned with **DOUBLE QUOTES**
They need the `#include <string>`

|Definition|Meaning|
|---|---|
|string name;| Defines an empity string|
|string myname("Gabriel");| Defines and initialize it|
|string yourname(myname)|Defines a string an initialize it|
|string yourname(myname, 3)|Defines a string an initialize it with the first 3 chars of the variable|
|string yourname(myname, 3, 2)|Defines a string and initialize it with 2 chars, beginning at the position 3 of the string array|

<br/>

### String inputs

```cpp
cout << "What is your name? ";
cin >> name; // no-spaced strings

cout << "What is your name? ";
getline(cin, name); // With spaces strings

```

The `getline()` function will get all the input until a \n (ENTER)

When you go from `cin >> variable` to `getline(cin, name)` the extraction operator will catch the data and let the \n in the buffer, so the \n in the end of the line will be saved in the memory too or will works as the Enter for the `getLine()`.

You can use the `cin.ignore()` to avoid the \n from the >> operator always when you will go from the `cin` to `getline`

You HAVE to use extraction to get int, **getline only works for strings**

For C++ the good pattern is Camel Case, but you can use Snake Case too.

<br/>
<br/>

# Arithmetic Operators

|Symbol|Operation|
|---|---|
|+| Addition|
|-| Minus|
|*| Multiply|
|/| Division|
|%| Module (Remainder)|

### Order of execution
1. Negation (-), ir order, left to right
2. \* / %, in order, left ro right
3. \+ -, in order, left to right

### Integer division
The result ever be an Integer, the decimal will be dropped

### Modulo operator
Evaluates to the remainder of the division

<br/>
<br/>

# C++ math library

`#include <cmath>`

Has 20 math operations called functions

# C++ Standard library (cstdlib)

This is one of the widely used functions.

Math functions, conversion functions (types), generate **random numbers**, searching and sorting, and constants.
<br/>

### Random number generation

`rand()` ***return a pseudo-random number integer*** each time that it's called. The number is machine dependant, so more powerful the processor, bigger the number. This function uses a standard seed 1, that can make the function return the same number many times.

So, you can use `srand()` to use a different seed, it will be re-generate the numbers. The best way is use the time as the seed.

For this, you can use the lib `<ctime>`

The function time()

```cpp
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); //Just one time setting the seed

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
- Add x (starting point) to adjust the range to start with x ()

`rand() % 6 + 10` => 6 random numbers starting from 10.

We can define a data type to time variables `time_t variable;`

<br/>

### Integer limits library (limits)

Provides information's about the properties of arithmetic types, limits of a data.
<br/>
`#include <limits>`
<br/>
`min()` or `lowest()` and `max()`, `is_signed()`

<br/>
<br/>
<br/>

# Data Type conversions

Operations can only be performed between operands of the same type. If they are different, C++ will automatically convert one of them to match the other (***implicit conversion***).<br/>
The conversion will exist only in the line of the operation. The original type will not change.

#### Conversions are made by hierarch:
1. long double
2. double
3. float
4. long
5. int

<br/>

### Rules

1. Char and short automatically promoted to int **before** the arithmetic operation
2. The lower always is promoted to the higher one
3. When using `=` the right hand will be converted to the left hand

PS: Doubles and floats always will truncate (Floor)

<br/>
<br/>

## Type casting

Manually change the type a variable in a statement

```cpp
    int myIntVar = 7;
    cout << static_cast<double>(myIntVar);
```

<br/>
<br/>
<br/>

# Formatting numerical output

### Floating-point numbers
```cpp
 #include <iomanip>
```

|Operator|For what?|
|----|----|
|`fixed`|Fixed floating point, not scientific|
|`scientific`|Use scientific notation|
|`setprecision(p)`|Set maximum number of digits in floating points|
|`showpoint`|Show decimal point and all trailing zeroes|

You need to write `fixed` just once. After that, just set precision for every statement you want.

When you use a manipulator like fixed or scientific, you can define the digits _**after dot**_, `setPrecision(p)` setting the maximum digits.

If you use the `setPrecision(p)` without the manipulator, it will set the total amount of digits to `p`

<br/>
<br/>
<br/>

# WARNING `#include <bits/stdc++.h>`

This library add all the C++ libraries to you code, it increase the compilation time a lot, and only make sense to use if you are in a code competition.