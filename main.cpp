#include <iostream>
#include <string>

#include "Class.hpp"

using namespace std;
int main() {
   
    string newName;
    int newHeight;
    double newWeight;
    
    BMI student_1;
    
    cout << "Enter Name: ";
    cin >> newName;
    cout << "\nEnter Height: ";
    cin >> newHeight;
    cout << "\nEnter Weight: ";
    cin >> newWeight;
    
    student_1.setName(newName);
    student_1.setHeight(newHeight);
    student_1.setWeight(newWeight);
    
    cout << "Name: " << student_1.getName() << endl
    << "Height: " << student_1.getHeight() << endl
    << "Weight: " << student_1.getWeight() << endl;
    
    
    return 0;
}
