# Classes and Objects

Objects are also called instances of classes, which means, they are "kinds" of data that have the  same shape of the class

<br/>

## Classes 

They are a representation of some thing that exists in the reality, they are the shape for complex data.

### Attributes -> Members of a class

### Member functions -> Methods or functions of a class

### Encapsulation -> COmbining data and member functions into an object (Making sure to hide the data)

### Data or information hiding

Restricting access to certain member of an object (Public and private)

### OOP

Real-world program is never written by one person. Every C++ program we have written so far has used objects. Other people can use your program as well as you use theirs.

### Object interface

Programmers should separate an objects interface from its implementation. The user of an object only needs to know the interface, not the inside functionality of an object

The access specifiers public and private can be used in many parts of the class, the default access policy for attributes are **PRIVATE**

```cpp
class ClassName {
    // Attributes
    private:
        int numPages;
        string title;
        float price;

    // Members functions are prototypes and not definitions
    public:
        void setNumPages(int);
        int getNumPages()const;
}
```

The class name will be the dataType

```cpp
int main() {
    Class myObject;
    myObject.PublicAttribute(parameter);
}
```

### Function definition:

We use scope resolution operator to define the member functions of a class

```cpp
void Class::FunctionMember(parameters) const {
    body
}
```

The const informs the compiler that this function will not be modifying the value of any attributes

## Mutator functions

Function that mutate or changes member data. Also called **"setter"**

```cpp
void Book::setNumPages(int num) {
    numPages = num;
}
```

<br/>

## Separating specification from implementation

<br/><br/>

## Constructor

They are not created with return type, they have the same name as the class, and they may or may not have parameters

### Default constructor

Default constructor is a constructor that takes no arguments

If you write a class with no constructor, C++ wil write a default constructor for you, this one does nothing

Creating an instance...

### Overloaded constructor

This constructor can receive parameters. first indicates parameters in prototype:
`Rectangle(double, double);`

Then, use parameters in the definition

```cpp
Rectangle::Rectangle(double width, double height) {
    // Body
}
```

### This

This is a operator that point to the first class above this declaration

```cpp
IceCream::IceCream(string cone) {
    this->cone = cone;
}
```

<br/>

## Destructor

Is a member function and is automatically called when an object is destroyed

Destructor name is  `~classname`

Has no return type; takes no arguments

Only one destructor per class, it cannot be overloaded

If constructor allocates dynamic memory, destructor should release it.