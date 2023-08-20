
#include<iostream>

using namespace std;

class example{
    int size;
    int *p;

    public:
        example(int s){
            size=s;
            p = new int[size];
        }
        void input(){
            cout<<"Enter the values "<<endl;
            for(int i=0;i<size;i++){
                cin>>p[i];
            }
        }
        void output(){
            cout<<"The values entered by the user are: "<<endl;
            for(int i=0;i<size;i++){
                cout<<(p[i])<<endl;
            }
        }
};
int main(){
    int d;
    cout<<"Enter the size of an array: ";
    cin>>d;
    example e(d);
    e.input();
    e.output();
    return 0;
}