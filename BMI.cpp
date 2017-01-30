#include "BMI.hpp"


//Default Contructor
BMI::BMI(){
    height = 0;
    weight = 0.0;
}

//Overload Function
BMI::BMI(string newName, int newHeight, double newWeight){
    name = newName;
    height = newHeight;
    weight = newWeight;
}

//Destructor
BMI::~BMI(){
}

//Accesor Function
string BMI::getName() const {
    return name;
}

int BMI::getHeight() const{
    return height;
}

double BMI::getWeight() const {
    return weight;
}


//Mutator Functions

void BMI::setName(string newName ) {
    name = newName;
}

void BMI:: setHeight(int newHeight ) {
    height = newHeight;
}

void BMI:: setWeight(double newWeight ) {
    weight = newWeight;
}
