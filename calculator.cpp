#include <iostream>
using namespace std;
int main() {
          float num1, num2;
          int choice;
        cout<<"Enter first Number: " ;
        cin>>num1;
        cout<<"Enter second number:";
        cin>>num2;
        cout<<"Menu:\n";
        cout<<"1. Addition, \n2. Subtraction, \n3.Multiplication, \n4. Division \n";
        cout<<"Enter Your operation of choice: ";
        cin>>choice;
        switch(choice) {
            case 1:
            cout<<"Result: "<<num1+num2;
            break;
            case 2:
            cout<<"Result: "<<num1-num2;
            break;
            case 3:
            cout<<"Result: "<<num1*num2;
            break;
            case 4:
            cout<<"Result: "<<num1/num2;
            break;
            default:
            cout<<"Invalid operator.\n";
            return 1;
        }

    return 0;
}
