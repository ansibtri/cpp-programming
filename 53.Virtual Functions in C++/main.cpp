#include<iostream>

using namespace std;

class BaseClass{
    public:
        int var_base;
        virtual void display(){
            cout<<endl;
            cout<<"Displaying Base class variable var_base: "<<var_base<<endl;
        }
};
class DerivedClass: public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<endl;
            cout<<"2Displaying Base class Variable var_base "<<var_base<<endl;
            cout<<"2Displaying Base class Variable var_derived "<<var_derived<<endl;
        }
};
class GrandChild: public DerivedClass{
    public: 
            int grandchild;
            void display(){
                cout<<endl;
                cout<<"Grand Child Executed"<<endl;
            }
};
int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    GrandChild Gc;
    base_class_pointer = &Gc;
    base_class_pointer->display();
    return 0;
}