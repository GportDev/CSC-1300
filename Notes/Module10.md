# Structures and abstract data types

### Data types

A data type defines the values that cna be stored in a variable and the operations that can be performed on it

### Abstraction

Is a general module of something (Capture general characteristics without details)

### Abstract data types

Created by the programmer

Composed of 1 or more primitive data types

### Structure

Allows multiple variables to be grouped together. A structure is a way to implement ADT

```cpp
/*

struct Name { -> Structure tag
    type1 field1; -> Structure member
    tyep2 field2, field3, field4; -> Structure member
}

*/

struct Student {
    int StudentID;
    string name;
    short yearInSchool;
    double gpa;
}
```

Structure declaration does not allocate memory or create variables, to define variables we use the structure **tag** as type name.

`Student stud1;` -> Creates a memory location that holds the data about this entity in the structure defined.

| Field      |Value|
|------------|-----|
|studentID   |     |
|name        |     |
|yearInSchool|     |
|GPA         |     |


### Dot operator

We use the `.`to access data inside structures

```cpp
Student stud1;

cin >> stud1.studentID;

getline(cin, stud1.name);

stud1.gpa = 3.75;
```

OBS: You cannot just print out the whole structure in once time. This will throw an Error. Instead, you should print out every structure's member.

Also, you cannot compare whole structures in branch. You should compare members

We can use structures inside structures, but since C++ is compiled, more deep is the structure, before it need to be declared

```cpp
struct PersonInfo {
    string data;
    int data2;
}

struct student {
    int id;
    PersonInfo pData;
}
```

## Structures and functions

Them are not passed by reference by default, we need to use the address operator `&`.

Example: structFunc_1.cpp

## Pointers to structures

Pointers to structures are variables that can hold the address of a structure

Can use `&`operator to assign address `stuPtr = &stu1;`

Structure pointer can be a functions parameter too

### Access

When accessing pointers to structures attributes, we need to isolate the pointer first, then access the attribute:

```cpp
cout << (*stuPtr).studentID;
```

We also can use structure pointer operator to clean the code

```cpp
cout << stuPtr->studentID;>
```