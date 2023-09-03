#include<bits/stdc++.h>
class Student{
    private: // can be accessed inside the class only
    //string name;
    int rollno;
    int age;
    protected:
    int height; // can be accessed only inside the class or child class
    public: // can be accessed anywhere
    Student(int x ,int y){
        
        rollno = x;
        age = y;
    }
    int printAge(){
        //cout<<name<<endl;
        return age;
    }
    int printRollno(){
        return rollno;
    }
};
using namespace std;
int main(){
    Student aman(5,22);
    cout<<aman.printAge(); 
    
}