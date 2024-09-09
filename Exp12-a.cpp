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