# Pointers

Variables that store the memory address of some data.

<br/>
<br/>

### Why?

More efficient and faster programs

Allows programmer to create variables and/or arrays during the runtime of the program. It's called dynamic memory allocation.

<br/>

## Arrays vs. Linked list

Vectors/arrays suffer from the insert/erase performance problem (When a piece of data is erased, all of the other next elements should move back one position to the array be "fit" again with the data).

The solution for this problem is a **linked list**, where the data is not continuos memory locations, each item contains a pointer to the next item location in memory. Insert/Remove just need to move the pointer (the address of the next) and not move the elements from address.

All the memory address of an array are just 4 bites apart [4a00, 4a04, 4a08]

Pointers can be used as array name, since the array name just hold the memory address of the first element of the array. Also, we can use the array notation when an array is assigned to the pointer

## Getting the address of a variable

Since each variable in a program have an address, we just need to use the `&` <ins>dereference</ins> operator to get the address

```cpp
cout << &variable;
```

<br/>
<br/>

## Pointer variables

This is just ***A variable that holds the address***

```cpp
int *intptr; // intptr can hold the address of an int
char *charptr; // charptr can hold the address of an char

// int * intprt  and int* intprt means the same
```

Assign in an address to a pointer variable

```cpp
int *intptr;

intptr = &number;
```

We can initialize an pointer variables as nullptr, or the Null value

<br/>
<br/>

## The indirection operator

"*" dereferences a pointer

It allows you to access the item that the pointer points to. This return the value of the memory address stored in the pointer.

```cpp
int x = 25;
int *intptr = &x;

cout << *intptr << endl;
```

## Pointer notation

Sum or subtract a pointer means go "up" or "down" in the array (number * size of the type of the array)

```cpp
int vals[] = {4,7,11}, *valprt;
valprt = vals;

cout << *(valptr+1); // 7 The next memory address value in the array
```

So, `vals[i] == *(vals + 1)`

## Pointers as function parameters

Works like reference variable to allow change to argument from within a function

Parameter in prototype and heading should have *
`void function(int *)` and `void function(int *x)`

Dereference the pointer in the body with *
`int temp = *x` Temporary store the value for the swap 

Use the reference notation in the functions calls
`function(&num1)`

## Dynamic memory allocation

We can allocate storage for a variable while the program is running

The computer returns address of newly allocated variable

```cpp
double *dptr = nullptr;
dptr = new double;
```

This is a good approach for arrays and not for single variables

```cpp
const int SIZE = 25;
double* arrayPtr = new double[SIZE]; // Create an normal array, but this array do not have a name, the name is the pointer
```
After that, we can use both array or pointer notation to access the array.

Since this is not deleted automatically, you NEED to delete manually.

### Delete

Use this when you program finish the use of the array: `delete ptr` or `delete [] arrayPtr`

### Memory regions

1. Stack - Automatic erase
2. Code -
3. Heap - Dynamic memory (Have more space and let creation of arrays in runtime)
4. Static / Global - 

<br/>
<br/>

## Array of pointers

You could then dynamically allocate multiple arrays where the memory address of these arrays are stored in the array.

```cpp
//Get the size of the array of pointers
int numPlayers;

int* numGames;
//Dynamically allocate the array with this length
numGames = new int [numPlayers];

// Data type of array* *Define a Pointer variable
int* *playerHours;

playerHours = new int* [numPlayers];

//For each player(Inside a loop), dynamically allocate based on the number events that occurs in each dependent array
playerHours[i] = new int [numGames[i]];

cin >> playersHours[i][j];
```