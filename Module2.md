# Computational thinking
Process of approaching a problem in a systematic manner (Step-by-step) and creating and expressing a solution for the computer
There are 4 important characteristic for algorithm:
- 
-
-
-

## Algorithm
Is a clear sequence of instruction used to solve a specific problem

### From Algorithm to program

Write the code (Statements)
Save in a file (for C++ is .cpp)
Compile it in a Compiler to became a executable program

## Procedural Design
Used to model programs that have an obvious flow of data
Is a programming paradigm built around the idea that exist a sequence of statements 

## Instruction types
- Inputs
- Processing (Calculation)
- Output


# Parts of a program

```cpp

#include <iostream>
using namespace std;

int main() {
    cout << "Hello class! \n";
    return 0;
}

```

- Main -> Where the program starts execute (Function)
- Curly Braces -> Enclose a block of statements
- Indentions -> The space before a code in a line that meaning that line is inside the previous block
- Return Statement -> Where the programs ends (Main should have a return statement - at least a return 0)
- Variables -> Piece of memory where we store data to use in the program. They must be defined in C++ before use

### COUT (Console OUTput)

- Use to display info to the screen

- Come from the package <iostream>

- Must use << the stream insertion operator

\n - newline

\b - backspace

\r - return

\\\ - backslash

\' - single quote

\" - double quote


### ENDL
Tells tot he operator to insert a new line

### Output a value stored in a Variables

Do not enclose the variable in quotes

```cpp

cout << "Hello " <<variable << endl

```

<< means _string insertion_
>> means _string extraction_

# Compile the program
`g++ filename.cpp -o NameExecutable`

If using Clang (Mac), `clang++ filename.cpp -o NameExecutable`

We can just do not name and when press enter, the executable will receive the same name of the .cpp file

To execute it, use:

``

## Error syntax

`filename.cpp:line:char: Error described`


## Formatting output with stream manipulators

`#include <iomanip>`

This manipulators change the way that the output works

setw (w) -> `cout << stew(10) << "Crockett"` => will use to set the max points that this string will get. This rule only apply for the direct next. The string should be shorter than the width set in the function

left -> 

right ->

With this rules we can organize our output in columns

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << setw(12) << 2897 << setw(6) << 5 << setw(6) << 837 << endl;
    cout << setw(12) << 34 << setw(6) << 7 << setw(6) << 1623 << endl;
    cout << setw(12) << 390 << setw(6) << 5 << setw(6) << 20 << endl;
}
```

# Inputs

command `cin` -> Console INput

We should save the use input in a variable.

```cpp
    int height;

    cout << "How tall is the room?";
    cin >> height;
```

We also use more than one input per row.

```cpp
    int height;
    int width;

    cout << "Type the height and width gap by a space";
    cin >> width >> height
```

# Comments

Do not use this every time, use it to name main sections of the code, or to explain important things.

The comments could be single lined or multi-lined spaces.

MAKE A MULTILINE COMMENT IN THE ASSIGNMENTS

# Errors

Syntax error -> Problem while the program is compiled
Logic error -> Problem while the program is executed

## Warnings

Possible logic error but doesn't stop the compiler from creating an executable program

`clang++ -Wall program.cpp`

This command will compile with warnings output.

# Debugging and testing programs

Troubleshooting -> Finding the problem or trouble with the code

1. Predict a possible cause of the problem
2. Conduct a test to try validate that couse
3. Repeat this process until the problem is resolved

### Stuck?

1. Take a break from coding
2. Google the specific issue to see if anyone else has seen the error
3. Get help from a TA or instructor

## Testing

- Manually set a variable to a value
- Insert a print of the variable
- Comment a block of code and see what's the output

### Debbuger