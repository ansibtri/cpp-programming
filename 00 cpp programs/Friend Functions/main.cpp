#include<iostream>

using namespace std;
class Vehicle2;
class Vehicle3;
class Vehicle1{
    int price1;
    public:
        void setPrice(int price){
            this->price1 = price;
        }
        friend void maxPrice(Vehicle1, Vehicle2, Vehicle3);
};
class Vehicle2{
    int price2;
    public:
        void setPrice(int price){
            this->price2 = price;
        }
        friend void maxPrice(Vehicle1, Vehicle2, Vehicle3);
};
class Vehicle3{
    int price3;
    public: 
        void setPrice(int price){
            this->price3 = price;
        }
        friend void maxPrice(Vehicle1, Vehicle2, Vehicle3);
};
void maxPrice(Vehicle1 v1, Vehicle2 v2, Vehicle3 v3){
    int prices[] = {v1.price1, v2.price2, v3.price3};
    int max = 0;
    for(int i=0;i<3;i++){
        if(prices[i]>max){
            max = prices[i];
        }
    } 
    cout<<"The maximum prices is "<<max<<endl;
}
int main(){
    Vehicle1 v1;
    Vehicle2 v2;
    Vehicle3 v3;
    v1.setPrice(45000);
    v2.setPrice(59999);
    v3.setPrice(198345);
    maxPrice(v1,v2,v3);

    return 0;
}