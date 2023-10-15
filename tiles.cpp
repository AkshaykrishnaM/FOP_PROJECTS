/*
NAME: AKSHAY KRISHNA
STUDENT ID: 0137246
SEMESTER: 1
LECTURER: MS. BRIDGET
*/

#include<iostream>
using namespace std;

int main()
{
	double length, width, area, tilesreqired;

	cout << "Enter the length of the room: ";
	cin >> length;
	cout << "Enter the width of the room: ";
	cin >> width;

	area = length * width;

	tilesreqired =  area / 12;	

	cout << "The area of the room is " << area << " square feet." << endl;
	cout << "You will need " << tilesreqired << " tiles." << endl;

return 0;
}
