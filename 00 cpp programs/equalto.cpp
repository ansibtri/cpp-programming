#include <iostream>

using namespace std;

class Equalto
{
    string word;

public:
    bool val = 0;
    Equalto() {}
    Equalto(string w)
    {
        word = w;
    }
    Equalto operator==(Equalto words)
    {
        if (words.word == word)
        {
            val = true;
        }
        else
        {
            val = false;
        }
    }
};
int main()
{
    Equalto a("anis"), b("anish"),c;
    a==b;
    if(a.val){
        cout<<"a==b is true";
    }else{
        cout<<"a!=b";
    }
    return 0;
}