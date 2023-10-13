# Loops

## While Loop

```cpp
int number =;
while (number <= 5) {
    cout << "Hello";
    number += 1;
}
```

One good way to use it is to validate user inputs

```cpp
cout << "Enter a number 1 to 5:";
cin >> number;
while (number < 1 || number > 5) {
    cout << "Invalid input. Please, try again: " << endl;
    cin >> number;
}
```

Other way is a running total um of values

```cpp
int sum=0;
int num=1;
while (num <= 10) {
    sum += num;
    num++;
}
cout << "Sum of numbers 1 - 10 is " << sum << endl;

```

## Do-while loops

Post-test loop, although the expression is false, this loop will execute one time.

```cpp
do {
    run();
} while (notEdge);
```

Used to control running an entire program multiple times based on user decision.

```cpp
char response;
do {
    // entire program
    cout << "Do you wanna run again?";
    cin >> response;
}
```

## Increment operator
++
Can be used prefix or postfix

`++var, var++`

## Decrement operator
--
Can be used prefix or postfix

`--var, var--`

The prefix means the "First do the math, after print or do any other operation"
The post fix means "First do the other operation (like print) and after increase the value"

So, postfix is good to loops, the loop will occur first and then the number will be decremented/incremented

They only can used in things that have a place in the memory

# For loop

```cpp

for (int i=1, i<=5; i++) {
    cout << "Hello!" << endl;
}

```

for(initial value; range or condition; increment)

We can use more than one variable per loop

```cpp

for (int x=2, y=3; y<=10; x++, y++) {
    ...
}

```

# Deciding which loop to use

The while loop is a conditional pretest loop
- Iterates as long as a certain condition exists
- Validating user input
- Reading lists of data terminated by a sentinel
- Getting a running total

The do-while loop is a conditional post-test loop
- Always iterates at least once
- Repeating a menu
- Allowing user to run program as many times as they want

The for loop is a pretest loop
- Built-in expressions for initializing, testing and updating
- Situations where the exact number of iteration is known

# Nested loops
Loops inside the body of other loops
- Inner loops goes through all repetitions for each repetition of the outer loop
- Inner loop repetitions complete sooner than outer loop
- Total number of repetitions for inner loop is product of number of repetitions of the two loops.
- The loop variable for the outer loop is often named row or i (iterations), and the loop variable for the inner loop is named col or j

## Until a match is found
1. Initialize a bool variable flag to false
2. Get the input
3. Check if negative, if yes and user input is valid, change to true

## Find Maximum or minimum
1. Get first input value
2. Loop while you have a valid number, in loop get another value
3. Compare new input to largest (or smallest)
4. Update largest (smaller) if necessary
5. Print largest(smaller) after loop

```cpp
int largest, value = 0;

cin >> largest;
while(value != -1) {
    cout << "Enter a positive value";
    cin >> value;
    if (value > largest)
        largest = value;
}

cout << "The largest is: " << largest;

```