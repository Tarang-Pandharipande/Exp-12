# Exp-12

## Aim - 
To study and implement Constructors and Destructors

## Theory - 
Constructors are unique member functions of a class that are automatically called when an object of the class is created. The object’s data members are initialized. Resources may also be allocated when required.
There are some key points about costructors which are:

The name of the constructor is same as its class name.
Constructors do not have a return type.
Constructors are mostly declared in the public section of the class.
Multiple constructors can be defined with different parameters, this is known as overloading.

There are mainly 3 types of constructors. They are:
Default Constructor:
A constructor which takes no arguments. It is also called a zero-argument constructor as it has no parameters.

Parameterized Constructor:
A constructor that takes parameters, allowing the object to be initialized with specific values.

Copy Constructor:
A constructor that initializes an object using another object of the same class. It is used for deep copying and when passing objects by value.


Deconstructors -
A destructor is also a special member function like a constructor.

Destructor destroys the class objects created by the constructor.
Destructor has the same name as their class name preceded by a tilde (~) symbol.
It is not possible to define more than one destructor.
The destructor is only one way to destroy the object created by the constructor.
Destructor neither requires any argument nor returns any value.
It is automatically called when an object goes out of scope.
Destructor release memory space occupied by the objects created by the constructor.

## Code - 
A - 
```
#include <iostream>
using namespace std;
class student
{
    int rollno;
    char name[50];
    double fee;
    public:
    student()
    {
        cout<<"Enter the roll number : ";
        cin>>rollno;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the fee: ";
        cin>>fee;
    }
    void display()
    {
        cout<<endl<<rollno<<"\t"<<name<<"\t"<<fee<<endl;
    }
};

int main(){
    student s;
    s.display();
    return 0;
}
```

B - 
```
#include <iostream>
using namespace std;

//defining the constructor outside the class
class student
{
    int rn;
    char name[50];
    float fee;
    public:
    student();
    void display();
};
student::student()
{
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the roll no.: ";
    cin>>rn;
    cout<<"Enter the fee: ";
    cin>>fee;
}
void student::display()
{
    cout<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<rn<<endl;
    cout<<"Fee: "<<fee<<endl;
}
int main()
{
    student s1;
    s1.display();
}
```

C - 
```
#include<iostream>
#include<string>
using namespace std;

class Data {
    string name;
    int roll_no;
    char dept[50];
    int batch;

public:
    Data() {
        cout << "Name: ";
        cin >> name;
        cout << "Roll Number: ";
        cin >> roll_no;
        cout << "Department: ";
        cin >> dept;
        cout << "Batch: ";
        cin >> batch;
    }

    void display() {
        cout << endl << "DETAILS:" << endl << name << " " << roll_no << " " << dept << " " << batch << endl;
    }
};

int main() {
    Data d1;
    d1.display();
}
```

D -
```
#include<iostream>
using namespace std;

// Defining parameterized constructor
class Num {
    // int a=7, b=9;
public:
    Num(int c, int d) {
        if (c > d) {
            cout << c << " is greater"<<endl;
        } else {
            cout << d << " is greater"<<endl;
        }
    }
};

int main() {
    Num n1(4, 3);
}
```

E - 
```
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
```

F - 
```
#include<iostream>
using namespace std;

int count = 0;

class destruct {
public:
    destruct() {
        ::count++;
        cout << "No. of objects created: " << ::count << endl;
    }

    ~destruct() {
        ::count--;
        cout << "No. of objects destroyed: " << ::count << endl;
    }
};

int main() {
    destruct aa, bb, cc;
    {
        destruct dd;
    }
    return 0;
}
```
## Output - 
A. ![image_2024-09-09_135546064](https://github.com/user-attachments/assets/9128d7fd-3995-4732-8dd5-6dac8ae2d6e3)
B. ![image_2024-09-09_135645780](https://github.com/user-attachments/assets/81834779-c149-4499-8bb6-65ccee094214)
C. ![image_2024-09-09_135802016](https://github.com/user-attachments/assets/d89a4f01-af67-4826-aa5c-6315f9ecfc3b)
D. ![image_2024-09-09_135823511](https://github.com/user-attachments/assets/ac5c068a-9e15-4db0-9253-f5bd55e00d84)
E. ![image_2024-09-09_135846514](https://github.com/user-attachments/assets/b3f390ad-0e11-40e5-ac07-c9e5a7b1de9f)
F. ![image_2024-09-09_135910155](https://github.com/user-attachments/assets/9bea90b6-969c-4d49-86b8-ee0c27edece4)

## Conclusion - 
~ We learnt about constructors and deconstructors in C++.
~ We learnt the use case of each of them in C++.
