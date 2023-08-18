#include<iostream>
#include<cstring>
using namespace std;

// Describe all the living beings
class LivingBeings{
    public:
    string name; // Name of Living Beings
    float heights; // Height of Living Beings
    float avgLifeSpan; // Average Life Span 
    // constructor for setting values
    LivingBeings(string name, float heights, float avgLifeSpan){
        this->name = name;
        this->heights = heights;
        this->avgLifeSpan = avgLifeSpan;
    }
    // get() function for output of values 
    void get(){
        cout<<"Name: "<<this->name<<endl
        <<"Heights: "<<this->heights<<"m"<<endl
        <<"Average Life Span: "<<this->avgLifeSpan<<endl;
    }
};
// Describe the plants under the same character of living beings
class Plants: public LivingBeings{
    public: 
    string types; // values like tree,herbs,shrubs
    Plants(string name, float heights, float avgLifeSpan, string types):LivingBeings(name, heights, avgLifeSpan){
        this->types = types;
    }
    // get() function for output of values 
    void get(){
        LivingBeings::get();
        cout<<"Types: "<<this->types<<endl;
    }
};
// Describe the animals under same character of living beings
class Animals:public LivingBeings{
    int legs;
    float weights;
    public: Animals(string name, float heights, float avgLifeSpan, int legs, float weights):LivingBeings(name, heights, avgLifeSpan){
        this->legs = legs;
        this->weights = weights;
    }
    // get() function for output of values 
    void get(){
        LivingBeings::get();
        cout<<"Legs: "<<this->legs<<endl
        <<"Weights: "<<this->weights<<endl;
    }
};
class Fly: public Animals{
    float avgHeightOfFly; // Average Height of Fly from ground
    
    public: Fly(string name, float heights, float avgLifeSpan,int legs, float weights,float avgHeightOfFly):Animals(name, heights, avgLifeSpan,legs,weights){
        this->avgHeightOfFly = avgHeightOfFly;
    }
    // get() function for output of values 
    void get(){
        Animals::get();
        cout<<"Average Height Of Fly: "<<this->avgHeightOfFly<<"m"<<endl;
    }
};
class Carnivorous: public Animals{
    float avgRunningSpeed;
    public:Carnivorous(string name, float heights, float avgLifeSpan,float avgRunningSpeed,int legs, float weights):Animals(name, heights, avgLifeSpan,legs,weights){
        this->avgRunningSpeed = avgRunningSpeed;
    }
    // get() function for output of values 
    void get(){
        Animals::get();
        cout<<"Average Running Speed: "<<this->avgRunningSpeed<<"m/s"<<endl;
    }
};
class Omnivorous: public Animals{
    string habitat;
    public:
    Omnivorous(string name, float heights, float avgLifeSpan,string habitat,int legs, float weights):Animals(name, heights, avgLifeSpan,legs,weights){
        this->habitat = habitat;
    }
    // get() function for output of values  
    void get(){
        Animals::get();
        cout<<"Habitat: "<<this->habitat<<endl;
    }
};
int main(){
    Fly F("Parrot",0.14,2.0,2,2.0,200);
    F.get();
    cout<<endl;
    Carnivorous C("Tiger",.8,38.5,90,4,200);
    C.get();
    cout<<endl;
    Omnivorous O("Vulture",.5,2.3,"Nepal",2,20);
    O.get();
    return 0;
}