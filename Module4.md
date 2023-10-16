# Branches

The sentences we use to change the direction of the flow, it will wrap code dependents to some conditions.

<br/>

## If branch syntax
```cpp
if (condition) {
    //Do that
}
```

Obs: The curly brackets are optional

<br/>

## Relational operators

|Operator| Description|
|--------|------------|
|>| Grater than|
|<| Less than|
|>=| Greater or equal to|
|<=| Less or equal to|
|==| Equal to|
|!=| Different of|
| \|\| | Or |
| && | And |
|!| Not|

<br/>

## If-else branch
```cpp

if (number % 2 == 0) {
    cout << number << " is even\n";
} else {
    cout << number << "is odd\n";
}

```
<br/>

## If-Else-If branch

Allow you to add a new condition to this statement.

<br/>

# Switch statements
Select among statements from several alternatives.
Could be used instead of cascade if/else
It needs a `break` statement for each case

```cpp

switch (choice) {
    case 'a': cout << "\nYou entered A.\n" ;
    break;
    case 'B': cout << "\nYou entered B.\n";
    break;
    default: cout << "You did not enter 1, 2 or 3! \n";
}
```