//
//  BMI.hpp
//  ClassPractice

#ifndef BMI_hpp
#define BMI_hpp

#include <iostream>
#include <string>

using namespace std;

class BMI{
private:
    string name;
    int height;
    double weight;
    
public:
    
    //Default Constructor
    BMI();
    
    //Overload Constructor
    BMI(string, int , double);
    
    //Destructor
    ~BMI();
    
    //Accesor Functions
    
    string getName() const;
        //getName ==> returns name of student
    
    int getHeight() const;
        //getHeight ==> returns height of student
    double getWeight() const;
        //getWeight() ==> returns weight of student
    
    //Mutator Functions
    
    void setName(string );
        //setName - sets name of student
        //@param - string name of student
    
    void setHeight(int );
        //setHeight - sets height of student
        //@param - int height of student
    
    void setWeight(double );
        //setWeight - sets weight of student
        //@param - double weight of student
};




#endif /* BMI_hpp */
