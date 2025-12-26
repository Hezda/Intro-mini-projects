//
//  main.cpp
//  menu based calculator
//
//  Created by Macbook Air on 24/12/2025.
//

#include <iostream>
#include <cmath>
using namespace std;

double addition(double a, double b){
    return(a + b);
}
double subtraction(double a, double b){
    return (a - b);
}
double multiplication(double a, double b){
    return (a * b);
}
double division(double a, double b){
    return (a /b);
    
}



int main(){
    
    char choice;
    double num1, num2;
    char answer;
    cout<< "Hello! This is an arithmetic calculator." << endl;
    cout<< "Do you want to use the calculator?" << endl;
    cout << "Please input y/n: ";
    cin >> answer;
    if (answer == 'y' || answer== 'Y'){
        do{
            cout << "\n-----------------------------\n";
            cout<< "Please choose one of the options \n";
            cout << " a. addition \n";
            cout << " b. subraction \n";
            cout << " c. Multiplication \n";
            cout << " d. Division \n";
            cout<< " your choice: ";
            cin >> choice;
            cout<< " Enter the two numbers: ";
            cin >> num1 >> num2;
            
            switch (choice){
                case 'a':
                    cout << addition(num1, num2) << endl;
                    break;
                case 'b':
                    cout << subtraction(num1, num2) << endl;
                    break;
                case 'c':
                    cout << multiplication(num1, num2) << endl;
                    break;
                case 'd':
                    cout << division(num1,num2) << endl;
                    break;
                default:
                cout<< "invalid Choice" << endl;}
            
            cout << "Do you want to perform another calculation? ";
            cin >> answer;
            
        }     while (answer == 'y' || answer == 'Y');
        
        cout << "Thank you, good bye!. " << endl;
    }
    else{
        cout<< "Okay thank you, bye!";
        
      
    }
    return 0;
}
    
