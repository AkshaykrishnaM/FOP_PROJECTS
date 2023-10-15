/*
NAME: AKSHAY KRISHNA
STUDENT ID: 0137246
SEMESTER: 1
LECTURER: MS. BRIDGET
*/


#include<iostream>
using namespace std;

int main() {
    double building_cost, remainder;
    double architect_fee = 0.00;

    cout << "Enter cost of building in RM: ";
    cin >> building_cost;

    if (building_cost > 0) {
        remainder = building_cost - 5000;

        if (remainder <= 80000) {
            architect_fee = (5000 * 0.08) + (remainder * 0.03);
        }
        else if (remainder > 80000) {
            architect_fee = (5000 * 0.08) + (80000 * 0.03) + ((remainder - 80000) * 0.025);
        }

        cout << "Architect fee is RM " << architect_fee << endl;
    }
    else {
        cout << "Error: Building cost must be greater than 0." << endl;
    }

    return 0;
}
