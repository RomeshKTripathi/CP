#include<bits/stdc++.h>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    private :
    string fname,lname;
    int age,standard;
    public:
        void set_age(int age1){
             age = age1;
        }
        void set_standard(int standard1){
             standard=standard1;
        }
        void set_first_name(string fname1){
             fname = fname1;
        }
        void set_last_name(string lname1){
             lname =lname1;
        }
        int get_age(){return  age;}
        int get_standard(){return  standard;}
        string get_first_name(){return  fname;}
        string get_last_name(){return  lname;}
        string to_string(){
           stringstream ss;
           char c = ',';
           ss<<age<<c<<fname<<c<<lname<<c<<standard;
           return ss.str();
        }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
