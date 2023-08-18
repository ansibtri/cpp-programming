#include<iostream>

using namespace std;

struct Date{
    int date;
    int month;
    int year;
};
struct Hospital{
    string patient_name;
    int age;
    int bed_num;
    string illness;
    Date dob; // date of birth
    int ward_num;
    Date doa; // date of admission
};
int main(){ 
    Hospital H;
    cout<<"-------------------------------------------------------------------------------------";
    cout<<"Enter Patient Information: "<<endl;
    cout<<"Name: ";cin>>H.patient_name;
    cout<<"Age: ";cin>>H.age;
    cout<<"Bed Number: ";cin>>H.bed_num;
    cout<<"Nature of Illness: ";cin>>H.illness;
    cout<<"Year of Birth: ";cin>>H.dob.year;
    cout<<"Month of Birth: ";cin>>H.dob.month;
    cout<<"Date of Birth: ";cin>>H.dob.date;
    cout<<"Ward Number: ";cin>>H.ward_num;
    cout<<"Year of Admission: ";cin>>H.doa.year;
    cout<<"Month of Admission: ";cin>>H.doa.month;
    cout<<"Date of Admission: ";cin>>H.doa.date;
    cout<<"-------------------------------------------------------------------------------------";
    cout<<"Patient Information: "<<endl;
    cout<<"Name: "<<H.patient_name<<endl;
    cout<<"Age: "<<H.age<<endl;
    cout<<"Bed Number: "<<H.bed_num<<endl;
    cout<<"Nature of Illness: "<<H.illness<<endl;
    cout<<"Year of Birth: "<<H.dob.year<<endl;
    cout<<"Month of Birth: "<<H.dob.month<<endl;
    cout<<"Date of Birth: "<<H.dob.date<<endl;
    cout<<"Ward Number: "<<H.ward_num<<endl;
    cout<<"Year of Admission: "<<H.doa.year<<endl;
    cout<<"Month of Admission: "<<H.doa.month<<endl;
    cout<<"Date of Admission: "<<H.doa.date<<endl;
    cout<<"-------------------------------------------------------------------------------------";
    return 0;
}