# Computational thinking

Process of approaching a problem in a systematic manner (Step-by-step), creating and expressing a solution for the computer.<br/>
There are 4 important characteristic for algorithm:

- Decomposition (Take ideia and problems apart)
- Pattern Recognition (Look for similarities or trends)
- Abstraction (Transform the problem and focus on what's important)
- Algorithmic design (Create step-by-step instructions)

## Algorithm
*Is a clear sequence of instruction used to solve a specific problem*

### From Algorithm to program
Write the code (Statements) that follow the algorithm instructions
Save the code in a file (for C++ is .cpp)
Compile it in a Compiler (converting the code into machine language) to became a executable program

<br/>
<br/>
<br/>

# Procedural Design
Used to model programs that have an obvious flow of data (**Input -> Processing -> Output**)
Is a programming paradigm built around the idea that exist a sequence of statements 

## Instruction types
- Inputs
- Processing (Calculation)
- Output

<br/>
<br/>
<br/>


# Parts of a program

```cpp

#include <iostream>
using namespace std;

int main() {
    cout << "Hello class! \n";
    return 0;
}

```

- **Code (Textual representations of a program)**
- Main -> Where the program starts execute (Function)
- Curly Braces -> Enclose a block of statements
- Indentions -> The space before a code in a line that meaning that line is inside the previous block
- Return Statement -> Where the programs ends (Main should have a return statement - at least a return 0)
- Variables -> Piece of memory where we store data to use in the program. They must be defined in C++ before use

## Variables
Piece of memory where the program will store information to be referenced and manipulated.

They should be defined in C++ with a statement called **Variable definition** before being used

Contain the data type about the information that will be stored along with the name of the variable

`int height;`


## `cout` (Console OUTput) - Insert in the screen

- Use to display info to the screen/terminal

- Come from the package `<iostream>`

- Use `<<` the stream ***insertion operator***

- Unless you specify otherwise, the information is displayed in a continuous stream

\n - newline

\b - backspace

\r - return

\\\ - backslash

\' - single quote

\" - double quote

<br/>

### `endl` End of line
Tells to the operator to go down to next line.

<br/>

### Output a value stored in a Variables
Do not enclose the variable in quotes.

```cpp

cout << "Hello " << variable << endl

```

`<<` means _insertion_ <br/>
`>>` means _extraction_


<br/>
<br/>
<br/>


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

setw (w) -> `cout << stew(10) << "Crockett"` => will use to set the max points that this string will get. This rule **only apply** for the **direct next**. *The string should be shorter than the width set in the function*

left -> changes the alignment

right -> changes back to right alignment

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

<br/>
<br/>
<br/>

# Inputs

command `cin` -> **Console INput** or Characters IN

We should save the use input in a variable.

```cpp
    int height;

    cout << "How tall is the room?";
    cin >> height;
```

We can also use more than one input per row.

```cpp
    int height;
    int width;

    cout << "Type the height and width gap by a space";
    cin >> width >> height
```

The values should be separated by spaces, and the first values always goes to the first variable

<br/>
<br/>
<br/>


# Comments

Do not use this every time, use it to name main sections of the code, or to explain important things.

They are intended for persons reading the code, indicating the purpose of the program, describing variable's use and explaining complex sections.

The comments could be single lined `//` or multi-lined spaces `/* */`.

MAKE A MULTILINE COMMENT IN THE ASSIGNMENTS

They are ignored by the compiler

<br/>
<br/>
<br/>

# Errors

***Syntax error*** -> Problem while the program is compiled (violates a language's rule) - Semicolons...
<br/>
***Logic error*** -> Problem while the program is executed (runtime error - bug) - Divide a number by zero...

## Warnings

Possible logic error but doesn't stop the compiler from creating an executable program

`clang++ -Wall program.cpp`

This command will compile with warnings output.

<br/>
<br/>
<br/>

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
- Visually inspect the code
- Use a debugger

### Debbuger

A computer program that assists in the detection and correction of errors in the program