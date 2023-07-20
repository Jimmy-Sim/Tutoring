#include <iostream>

using namespace std;

// a function that returns an integer, with an integer parameter:
int function(int parameter) {
    .
    .
    .

    return 1;
}

// a function that does not return anything, with no parameter:
void function2() {
    .
    .
    .

    // notice that there is no 'return' statement in a void function
}

// a function that takes two numbers and returns their sum:
int sum(int num1, int num2) {
    return num1 + num2;
}

// a function that takes a name and age and prints them appropriately:
void introduce(string name, int age) {
    cout << "Hello, my name is " << name << " and I am " << age << " years old!\n";

    // notice that because we are just printing, there is no need for a 'return' statement, therefore this function is void
}

// int main() is also a function that returns an integer value! 
int main()
{
    int number1, number2;
    cin >> number1 >> number2;
    // function call of 'sum' function:
    sum(number1, number2); // number1 and number2 are the 'arguments' for the 'parameters' of 'sum' function


    string nameInput;
    int ageInput;
    cin >> nameInput >> ageInput;

    introduce(nameInput, ageInput);

    return 0; // we've been doing this habitually, but it is a convention to end your main() function with a 'return 0'
    // notice that the value we are returning, 0, pertains to the return type of the 'main' function, int!
}
