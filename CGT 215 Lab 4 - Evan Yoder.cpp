// CGT 215 Lab 4 - Evan Yoder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}


void factorial() {
	// I recommend writing your factorial code here
	int A;
	int sum;
	cout << "Factorial:" << endl;
	cout << "Enter a number:";
	cin >> A;
	sum = 1;
	while (A < 0) {

		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> A;
		
	};
	do {
		sum = sum * A;
		cout << A << "*";
		A = A - 1;
	}
	while (A > 0);
	cout << "=" << sum << endl;
}
void arithmetic() {
	// I recommend writing your arithmetic series code here
 int diff;
 int start;
 int num;
 int count = 0;
 int total = 0;
 cout << "Enter a number to start at: ";
 cin >> start; 
 cout << "Enter a number to add each time : ";
 cin >> diff;
 cout << "Enter the number of elements in the series: ";
 cin >> num;
 
 while (count < num) {
    cout << start;
    total = total + start; 
    start = start + diff;
    count = count + 1;
        if (count < num ) {
            cout << " + ";
        }
        else {
            cout << " = " << total << endl;
        }

}
}
void geometric() {
	// I recommend writing your geometric series code here
	int diff;
 int start;
 int num;
 int count = 0;
 int total = 0;
 cout << "Enter a number to start at: ";
 cin >> start; 
 cout << "Enter a number to add each time : ";
 cin >> diff;
 cout << "Enter the number of elements in the series: ";
 cin >> num;
 
 while (count < num) {
    cout << start;
    total = total + start; 
    start = start * diff;
    count = count + 1;
        if (count < num ) {
            cout << " + ";
        }
        else {
            cout << " = " << total << endl;
        }

}
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}
