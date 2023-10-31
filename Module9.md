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

## Getting the address of a variable

Since each variable in a program have an address, we just need to use the `&` operator to get the address

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

Assignin an address to a pointer variable

```cpp
int *intptr;

intptr = &number;
```

We can initialize an pointer variables as nullptr, or the Null value

<br/>
<br/>

## The indirection operator

"*" dereferences a pointer
It allows you to access the item that the pointer points to

```cpp
int x = 25;
int *intptr = &x;

cout << *intptr << endl;
```

