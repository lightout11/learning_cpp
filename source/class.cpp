#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student {
    public:
        int get_age() {
            return age_;
        }
        
        void set_age(int age) {
            this->age_ = age;
        }
        
        string get_first_name() {
            return first_name_;
        }
        
        void set_first_name(string first_name) {
            this->first_name_ = first_name;
        }
        
        string get_last_name() {
            return last_name_;
        }
        
        void set_last_name(string last_name) {
            this->last_name_ = last_name;
        }
        
        int get_standard() {
            return standard_;
        }
        
        void set_standard(int standard) {
            this->standard_ = standard;
        }
        
        string to_string() {
            stringstream ss;
            ss << age_ << "," << first_name_ << "," << last_name_ << "," << standard_;
            return ss.str();
        }
    
    protected:
    
    private:
        int age_;
        string first_name_;
        string last_name_;
        int standard_;
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