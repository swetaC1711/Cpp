
#include <iostream>//iostram is a class 

using namespace std;//namespace include all keywords likec in,cout
class Employee//class is template,no memory is allocate to class when we declare a object memory isdirectly allocated to class 
              //therefore class isa blue-print of object
{
    //data members
    int emp_id;
    string s;
    float sal;
    //member function
    public:
        void accept(){
        cout<<"Enter employee_id:";
        cin>>emp_id;
        cout<<"Enter name:";
        cin>>s;
        cout<<"Enter salary:";
        cin>>sal;
        
        }
        void display(){
        cout<<"\nEmployee_id is:"<<emp_id;
        cout<<"\nEmployee_name is:"<<s;
        cout<<"\nEmployee_salary is:"<<sal;
        }
    
};

int main()
{
    Employee e1;
    e1.accept();
    e1.display();

    return 0;
}
