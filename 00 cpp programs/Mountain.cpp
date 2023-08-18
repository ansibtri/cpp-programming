#include<iostream>

using namespace std;

class Mountain{
    string name;
    float height;
    string location;

    public: 
    Mountain(string name, float height, string location){
        this->name = name;
        this->height = height;
        this->location = location;
    }
    void CmpHeight(Mountain M){
        if(this->height > M.height){
            cout<<this->name;
        }else{
            cout<<M.name;
        }
        cout<<" is the highest among two."<<endl;
    }
    void DispInf(){
        cout<<"Mountain Information: "<<endl;
        cout<<"Name: "<<this->name<<endl;
        cout<<"Height: "<<this->height<<endl;
        cout<<"Location: "<<this->location<<endl;
    }
};
int main(){
    Mountain E("Everest",8848.45,"Solukhumbu");
    Mountain M("Manaslu",8163.00,"Gorkha");
    E.DispInf();
    M.DispInf();
    M.CmpHeight(E);
    return 0;
}