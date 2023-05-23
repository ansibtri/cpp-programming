#include<iostream>

using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter=0;
    
    public:
        void increaseCounter(void){counter++;}
        void setPrice(void);
        void displayPrice(void);
};
void Shop::setPrice(void){
    increaseCounter();
    cout<<"Enter Id of your item no: "<<counter<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item: "<<endl;
    cin>>itemPrice[counter];
}

void Shop::displayPrice(void){
    for(int i=0;i<counter;i++){
        cout<<"The Price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main(){
    Shop dukaan;
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}