#include <iostream>
#include <string>
using namespace std;

class Teacher{
    private:
        float salary;
    public:
        string name;
        string department;
        string subject;
        Teacher(string n, string d, string s, float sal){
            name=n;
            department=d;
            subject =s;
            salary= sal;
        }
        void setSalary(float sal){
            salary=sal;
        }
        float getSalary(){
            return salary;
        }
};
int main(){
    Teacher t1("BHUWAN", "SCIENCE","BIOLOGY", 50000);
    cout<<t1.name<<endl<<t1.department<<endl<<t1.subject<<endl<<t1.getSalary()<<endl;
    return 0;
}