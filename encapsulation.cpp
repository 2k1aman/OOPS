#include<bits/stdc++.h>
using namespace std;

//encapsulation := refers to binding/grouping data members and methods into one single unit
// so that we can protect it from outside intervention
//it helps in maintaining privacy
//The general idea of this mechanism is simple. 
//For example, you have an attribute that is not visible from the outside of an object. 
//You bundle it with methods that provide read or write access. 
//Encapsulation allows you to hide specific information and control access to the object’s internal state.
//getter setter is used to get/set data members
class Students{
    private :
    int age;
    string name;
    public:
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }
    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return age;
    }
};

int main(){
    Students aman;
    aman.setAge(5);
    aman.setName("aman");
    cout<<aman.getAge()<<" "<<aman.getName();

    return 0;
}