#include<iostream>
using namespace std;

class Teacher{
    private:
    string teacherName;
    string subject;
    double salary;
    public:
    Teacher(string teacherName = "",string subject = "",double salary=0.0){
        this->teacherName = teacherName;
        this->subject = subject;
        this->salary = salary;
    }
    string getTeacherName(){
        return this->teacherName;
    }
    void setTeacherName(string teacherName){
        this->teacherName = teacherName;
    }
    string getSubject(){
        return this->subject;
    }
    void setSubject(string subject){
        this->subject = subject;
    }
    double getSalary(){
        return this->salary;
    }
    void setSalary(double salary){
        this->salary = salary;
    }

};

int main(){
    Teacher arr[4];
    for(int i=0;i<4;i++){
        cout<<"Name : "<<arr[i].getTeacherName()<<", Subject : "<<arr[i].getSubject()<<", Salary : "<<arr[i].getSalary()<<endl;
    }
    arr[0] =   Teacher("Romesh","C++",800000);
    arr[1] =   Teacher("Sachin","Java",60000);
    arr[2] =   Teacher("Gaurav",".Net",900000);
    arr[3] =   Teacher("Deepak","C#",700000);
    for(int i=0;i<4;i++){
        cout<<"Name : "<<arr[i].getTeacherName()<<", Subject : "<<arr[i].getSubject()<<", Salary : "<<arr[i].getSalary()<<endl;
    }
}


