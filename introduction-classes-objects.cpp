#include<bits/stdc++.h>
class Student{
    private:
    //string name;
    int rollno;
    int age;

    public: 
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