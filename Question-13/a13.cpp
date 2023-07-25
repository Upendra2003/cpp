#include <iostream>
#include <sstream>
#include<string.h>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student{
    public:
        int age,standard;
        string first_name,last_name;

        void set_age(int n){
            age=n;
        }
        
        void set_standard(int n){
            standard=n;
        }
        
        void set_first_name(string n){
            first_name=n;
        }
        
        void set_last_name(string n){
            last_name=n;
        }

        int get_age(){
            return age;
        }

        string get_last_name(){
            return last_name;
        }

        string get_first_name(){
            return first_name;
        }

        int get_standard(){
            return standard;
        }

        string too_string(){
            string s_age=to_string(age);
            string s_standard=to_string(standard);
            string str=s_age+','+first_name+','+last_name+','+s_standard;
            return str;
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
    cout << st.too_string();
    
    return 0;
}