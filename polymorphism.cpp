//Polymorphism is a concept that allows you to perform a single action in different ways.
//poly means many and morphism means forms
/*
Real-life example:  A person at the same time can have different characteristics.
Like a man at the same time is a father, a husband, and an employee. 
So the same person possesses different behavior in different situations. This is called polymorphism.
*/

/*
types of polymorphism
a)compile time/static polymorphism - resolve during compile time:-
    1) function overloading :- 
    When there are multiple functions in a class with the same name but different parameters, 
    these functions are overloaded. The main advantage of function overloading is that it increases the program’s readability. 
    Functions can be overloaded by using different numbers of arguments or by using different types of arguments.
    2) Operator overloading :-
    same operator many functions like (+) can be used to concatenate strings and also used for addtion operator  
b) Run-time polymorphism / dynamic :- resolve during execution time :-
    1) Method overriding :-
    Method overriding is a feature that allows you to redefine the parent class method in the child class based on its requirement.
    rules: a) same function name b) same number of parameters c) inherited class
*/
// operator overloading syntax
// return_type_name operator (operator) (argument)
example: 
void operator + (class_name &obj){
    cout<<"hello";   // prints hello 
}

#include<bits/stdc++.h>
using namespace std;
class parent{
    public : 
    void show(){
        cout<<"we are in base class"<<endl;
    }
    int show(int a){
        cout<<a<<endl; // function overloading same function name with different arguments
    }
};
class subClass1 : public parent{
    public:
    void show(){
        cout<<"we are in subClass1"<<endl;
    }
};
int main(){
    parent num;
    num.show();
    num.show(2); // function overloading
    //subClass1 num2;
    //num2.show();  // method overrriding same function in different class
}