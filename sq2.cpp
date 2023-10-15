/*
NAME: AKSHAY KRISHNA
STUDENT ID: 0137246
SEMESTER: 1
LECTURER: MS. BRIDGET 
*/

#include <iostream> // for cout and cin
#include <cmath> // for sqrt function

using namespace std; 
int main() 

{

    double num1, num2 = 0.00; // 2 numbers

    int intCode; // code



    cout << "Enter 2 numbers"; // get 2 numbers

    cin >> num1 >> num2;    // get 2 numbers



    cout << "Enter code : 1 to +, 2 to -, 3 to * or 4 to /"; // get code

    cin >> intCode; // get code



    if (intCode == 1) // if code is 1

        cout << num1 + num2 << endl;   // if code is 1

    else if (intCode == 2) // if code is 2

        cout << num1 - num2 << endl;    // if code is 2

    else if (intCode == 3) // if code is 3

        cout << num1 * num2 << endl;    // if code is 3

    else if (intCode == 4) // if code is 4

        if (num2 != 0) // if num2 is not 0

            cout << num1 / num2 << endl;    // if num2 is not 0 

        else

            cout << "Cannot Divide by 0"; // if num2 is 0   

    else

        cout << "no such code"; // if code is not 1, 2, 3 or 4  



}
