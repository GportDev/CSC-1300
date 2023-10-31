# Files
Both, inputs and outputs can come or be printed in text files or other types of files.
This allows data to be retained between program runs. (Working like a external database)

1. ***Create a file variable*** - 
Use `ofstream` to create a new output file stream. This is a datatype "File stream object"

```cpp
#include <fstream>

ofstream output; // File-system object
```

2. ***Open the file*** - Use the `open` function to open the physical file on your computer.
```cpp
output.open("filename.txt");
```

There are 5 modes available to open files in C++
- ios::app - Append (Content is written in the end of the file)
- ios::ate - If the file exists, the program goes to the end of the file.
- ios::binary - Binary (Read and write in the pure binary format).
- ios::in - Input, if the file exists data will be read from the file.
- ios::trunc - Truncate, previous content will be deleted in every opening

3. ***Use the file (read from, write to, or both)***

```cpp
file << "Hello, word!\n"; // Output

file >> readVariable1; // Input like cin

getline(file, variable); // Input for strings
```

4. ***Close the file***

```cpp
output.close();
```

<br/>
<br/>

## Writing on a file - Outputs

For writing in a file, this file don't need to exist before, the compiler could create this in the run-time.

Use the `outfile` to output in the file.

```cpp
outfile << "Hello, word!\n";
```

Use the `.close()` to close the file.

```cpp
output.close();
```

The default mode is truncate (ios::trunc), it deletes the data previously in the file and start to write again.

The append (iso::app) mode keep the previous data, just put more after it.

```cpp
file.open("filename.txt", ios::app)
```

<br/>

## Reading from a file

Use the `ifstream` type to create an variable with an input file.

The file that we will use should be in the same folder of the code.

The `is_open` statement is used to test if the file is open.

`file >>` and `getline(file, variable)` can be used to get inputs from the file.

OBS: `fileName.ignore()` works in the same way of `cin.ignore()`

<br/>

## Using loops to precess files

The stream extractor `>>` returns *true* when a value was successfully read, and *false* otherwise. So, we can use it to make conditions to while/do-while loop

```cpp
while(inputFile >> number) {
    cout << number << endl;
}
```

### eof()

The `eof()` means *End of File*, this function returns *true* if the **previous** stream operation reached the end of the file. 

The `good()` function returns *true* if the **previous** stream operation had no problems.

<br/>
<br/>

# Stream errors

Errors that came from the reading/writing files (extraction or insertion fails).

<br/>
<br/>

# Reading files with delimiters

Delimiter is a special character that ends each piece of information (like the comma in CSV). Use the delimiter inside the `getLine()` function.

```cpp
myFile.open("delimited_text.txt", ios::in);
while(getline(myFile, input, '#')) {
    cout << input;
}
```

<br/>
<br/>

## Member Functions

Functions that may be used for input with whitespace, single character I/O.

`get()` - Reads single characters
`put()` - Writes a single character

<br/>
<br/>

## Binary Files

Contains unformatted, non-ASCII data.

User `read` instead of extraction `<<`, and `write` instead of insertion `>>`

```cpp
inFile.read(&ch, sizeof(ch));
```

For non-character data, use typecast operator to treat the address of the data.

```cpp
inFile.read(reinterpret_cast<char *>&num, sizeof(num))
```

<br/>
<br/>

## Random-access files

**Sequential access** Start at beginning and go through all data in file, in order, to end.

**Random access** Access data in any order, can go directly to a position.

`seekg` (Seek Get), `seekp` (Seek Put). Both will get or put data in the selected position.

```cpp
gradeFile.seekg(10L, ios::beg);
```

`tellg` return the current byte position in input file
'tellp' return the current byte position in output file