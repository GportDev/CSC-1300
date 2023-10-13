# Files
Both, inputs and outputs can come or be printed in text files or other types of files.
This allows data to be retained between program runs.

1. Create a file variable
2. Open the file
3. User the file(read from, write to, or both)
4. Close the file

## Writing on a file - Outputs

For writing in a file, this file don't need to exist, the compiler could create this.

```cpp
#include <fstream>
```

Use `ofstream` to create a new output file stream. This is a datatype "File stream object"

```cpp
ofstream output;
```

Use the `open` function to open the physical file on your computer.

```cpp
output.open("filename.txt");
```

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

## Reading from a file

Use the `ifstream` type to create an variable with an input file.

The file that we will use should be in the same folder of the code.

The `is_open` statement is used to test if the file is open.

`file >>` and `getline(file, variable)` can be used to get inputs from the file.

OBS: `fileName.ignore()` works in the same way of `cin.ignore()`

## Stream errors

Errors that came from the reading/writing files 

## Reading files with delimiters

Use the delimiter inside the `getLine()` function.

```cpp

myFile.open("delimited_text.txt", ios::in)

```

## Random-Access Member Functions

`seekg` (Seek Get), `seekp` (Seek Put). Both will get or put data in the selected position.

```cpp

gradeFile.seekg(10L, ios::beg);
```