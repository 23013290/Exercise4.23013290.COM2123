#include <iostream>
using namespace std;
// Function prototype
void displayMenu();
void performOperation(int choice, int num1, int num2);
int main() {
    char cont;
    do {
        int choice, num1, num2;
        displayMenu();
        cout << "Enter your choice(1-5): ";
        cin >> choice;
        cout << "Enter integer number 1: ";
        cin >> num1;
        cout << "Enter integer number 2: ";
        cin >> num2;
        performOperation(choice, num1, num2);
        cout << "Press y or Y to continue: ";
        cin >> cont;
    } while (cont == 'y' || cont == 'Y');
    return 0;
}
void displayMenu() {
    cout << "MENU\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Modulus\n";
}
void performOperation(int choice, int num1, int num2) {
    switch (choice) {
        case 1:
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 == 0) {
                cout << "The second integer is zero, divide by zero" << endl;
            } else {
                cout << "Result: " << num1 / num2 << endl;
            }
            break;
        case 5:
            cout << "Result: " << num1 % num2 << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
}
