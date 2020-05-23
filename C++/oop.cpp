#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{

    private:
    int a;
    string fname;
    string lname;
    int b;

    public:
    Student(){
    int a;
    string fname;
    string lname;
    int b;
    };

    void set_age(int age){
        a = age;
    }
    void set_standard(int std){
        b = std;
    }
    void set_first_name(string fn){
        fname = fn;
    }
     void set_last_name(string ln){
        lname = ln;
    }
    int get_age(){return a;}
    int get_standard(){return b;}
    string get_first_name(){return fname;}
    string get_last_name(){return lname;}
    string to_string(){return std::to_string(a)+","+fname+","+lname+","+std::to_string(b);}

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
