#include<iostream>
#include<string.h>
using namespace std;

class student {
    int rno;
    char name[50];
    double fee;

public:
    student(int, char[], double);
    student(student &t) // copy constructor
    {
        rno = t.rno;
        strcpy(name, t.name);
        fee = t.fee;
    }
    void display();
};

student::student(int no, char n[], double f) {
    rno = no;
    strcpy(name, n);
    fee = f;
}

void student::display() {
    cout << endl << rno << "\t" << name << "\t" << fee<<endl;
}

int main() {
    student s(151, "Vijay", 999999);
    s.display();

    student vijay(s); // copy constructor called
    vijay.display();

    return 0;
}