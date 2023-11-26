# Arrays

- They have a fixed length
- They are built-in
- They don't have methods to manipulate this
- They only can hold one type of data inside

```cpp
int list[10] // Create an array with 10 slots
```

Named constants are commonly used as size declarator;

You can initialize the array with less values than the size, it will be auto-completed with zeros.

They also cna be created with just the elements, and the size will be "implicit". A FULL initialization list is required

```cpp 
int num[] = {5,8,7} // Create an array with 3 slots already filled
```



### Access elements

To access any element inside an array we need to select the specific index of the slot we want to use.

The name of the array stores the memory address of the first element

C++ does not check it to make sure it is a valid index.

You can use an index that is beyond the bounds of the array. But this can **corrupt other memory locations, crash, program, or lock up computer, cause elusive bugs**

<br/>
<br/>

### Off-by-one error

When you start from index 1 instead of 0.

## Min-value or Max-value algorithm

```cpp
minValue = myArray[0];
for(int i = 0; i < numElements; i++) {
    if(myArray[i] < minValue) {
        minValue = myArray[i];
    }
}

cout << minValue << " is the smallest value in the array.\n" << endl;
```

<br/>
<br/>

## Find the sum of all elements

```cpp
total = 0;
for(int  i = 0; i < numElements; i++) {
    total += myArray[i];
}
cout << total << " is the sum of all elements.\n" << endl;
```

<br/>
<br/>

### Copying arrays

You cannot copy them just by the name. But It's easy, just need to copy each member inside the new array using a for loop.

<br/>
<br/>

### Comparing an array

Use an bool variable to keep the value of true until the arrays are not equals. Use an while loop to check the bool variable and the cout (that will go until the final position of the array)

Use an if to compare the current position of the array1 with the array2.

<br/>
<br/>

## Using parallel arrays

Different arrays that can be used relating data from each other by the index, the same index in different arrays will have related data.

```cpp
const int SIZE = 5;
int id[SIZE];
double average[SIZE];
char grade[SIZE];

for (int i = 0; i < SIZE; i++) {
    cout << "Student ID: " << id[i] << endl << "Average: " << average[i] << endl << "Grade: " << grade[i] << endl;
}
```
<br/>
<br/>

## Two dimensional arrays (Matrix)

An array of arrays. The outer array will be the rows, the insider array will be the columns.

To access them, we can just double access the array `exams[ROW][COL]`.

```cpp
int numbers[4][5] = {
    {6, 5, 4, 3, 2},
    {2, 5, 1, 3, 2},
    {1, 5, 2, 3, 2},
    {5, 6, 4, 2, 3},
}
```
<br/>
<br/>

## How to pass an array to a function

The arrays will always be passed by reference because the array name is the memory address of the array. We do not need to use the address operator.

### Function prototype

```cpp
void findMaxInArray(int [], int);
```

### Call statement

```cpp
findMaxInArray(myArray, SIZE);
```


## Char arrays / C-String

You can store a sequence of characters, it was the approach to create strings before the class String came.

```cpp
char movieTitle[20] = "Rogue One";
```

We can print a c-string with a single cout statement. Also, we can insert the value in an variable like that:

```cpp
cin.getline(variableName, SIZE);
```

To compare two c-strings, we need to use the method `strcmp()`, this return 0 if they are equal and 1 if not

We can use another method to join two different c-strings

```cpp
strcat(cStringVariable, " New string");
```

Finally, the way that we use to find the length of a string is the method `strlen(cString)`

# Vectors

`vector<DataType> name(SIZE, initialValue(0 is default))`

They are a data structure like array that can only store data of the same type.

Store in consecutive places in memory like an array.

They depend of a new lib, called vector

```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int numStudent = 4;

    vector<string> nameStudent(numStudent);
    vector<int> prizesWon(numStudent);

    for(int i = 0; i < numStudent; i++) {
        cout << "Student " << i + 1 << ": \n";
        cout << "Enter your name: ";
        getline(cin, nameStudent.at(i));
        cout << "How many prizes did you win? ";
        cin >> prizesWon.at(i);
        cin.ignore();
    }

    higestPrize = prizesWon.at(0);
    for(int i = 1; i < numStudent; i++>) {
        if(prizesWon.at(i) > highestPrize) {
            highestPrize = prizesWon.at(i);
            highestIndex = i;
        }
    }
}
```

Vectors check for access out of range. For access, we just use the `at()` method.

They are automatic initialized to 0. To use other value to initialize then, just change the second argument in the initialization.

Vectors can be resized using a new size!

<br/>

## push_back

This method allow to add new elements at the end of the vector (If it is of the same time of the vector), also, the size of the vector is increased by one

<br/>

## back

This method return the last element in a vector.

<br/>

## pop_back

Remove the last element in a vector, also, the size of the vector is decrease by one

<br/>
<br/>

### Search algorithm

Linear search algorithm -> Sequential search

Uses a loop to sequentially step through each piece of data (one at a time), from beginning and stopping when the searched element is founded.

<br/>

### Binary search

Much more efficient than the linear

Starts from the middle of the sorted array, if the searched element is greater than the middle element, the first half will be ignored and the algorithm will go to the next middle point in the half