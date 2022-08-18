#include<iostream>
#include<cstring>
using namespace std;

struct employee{
    char name[20];
    int age;
    float salery;
};

void modify_c(employee*);
void modify_cpp(employee &);
int main(){
    employee e1 = {"Rohit",21,45000.00};

    employee e2 = {"Atul",22,48000.00};

    modify_c(&e1);
    cout<<endl<<e1.name<<endl<<e1.age<<endl<<e1.salery<<endl;
    modify_cpp(e2);
    cout<<endl<<e2.name<<endl<<e2.age<<endl<<e2.salery<<endl;

    return 0;
}

void modify_c(employee *e){
    strcpy(e->name,"Ayushi");
    e->age = 19;
    e->salery = 80000.00;
}
void modify_cpp( employee &e){
    strcpy(e.name,"Sachin");
    e.age=20;
    e.salery=88000.00;
}