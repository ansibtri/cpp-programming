#include<iostream>

using namespace std;

class Shop{
    int id;
    float price;
    
    public:
        void setData(){
            cout<<"Enter ID: ";cin>>id;
            cout<<"Enter Price: ";cin>>price;
        }
        void getData(void){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }

};
int main(){
    int *size = new int(2);
    Shop *shop = new Shop[(*size)];
    for (int i = 0; i < (*size); i++)
    {
        (shop+i)->setData();
    }
    for (int i = 0; i < (*size); i++)
    {
        (shop+i)->getData();
    }
    delete size;
    delete[] shop;
    
    

    return 0;
}