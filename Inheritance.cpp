//Inheritance is the feature of OOPS in which we make new class with the help of some other class.
//we inherit the properties and methods of existing class into new class.
//Base class - whose members and methods are inherited
// Derived class - into which members and methods are inherited
//it helps in code reusability
//syntax :- 
// class base{};
// class derived : public base{};
/*
mode of inheritance
public
protected
private
*/  

/*
From above, we can see that two of the properties: Colour and MaxSpeed, are the same for every object. 
Hence, we can combine all these in one parent class and make three classes their subclass. 
This property is called Inheritance.
*/


#include<bits/stdc++.h>
using namespace std;
class Vehicle{
    private :
    int max_speed;
    string color;
};
class Cars : public Vehicle{
    private:
    int gears;
};
int main(){
    Cars BMW;
    BMW.max_speed = 5; // not accessible when in base class it is private
    BMW.gears = 5;


    return 0;
}