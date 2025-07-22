//Rajendra Chaganti
//PRN:24070123150
//B3
#include <iostream> // used for input and output
using namespace std; // so we don't have to write std:: before cin and cout

int main() {
    cout << "Hello World\n"; // prints Hello World

    float a, b; // declaring two float variables

    cout << "Enter two numbers: "; // asking user for input
    cin >> a >> b; // taking input for both numbers

    // NOTE: See arrows used in output (cout <<) and input (cin >>) carefully.

    cout << "Addition: " << a + b << endl; // prints sum
    cout << "Subtraction: " << a - b << endl; // prints difference
    cout << "Multiplication: " << a * b << endl; // prints product
    cout << "Division: " << a / b << endl; // prints division 

    return 0; // for sending back the value
}
/*
Output
Hello World
Enter two numbers: 2
3
Addition: 5
Subtraction: -1
Multiplication: 6
Division: 0.666667
*/
