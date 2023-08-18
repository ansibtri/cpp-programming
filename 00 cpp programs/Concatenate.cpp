#include <iostream>
#include <string>
using namespace std;

class Concat
{
    string word;

public:
    Concat() {}
    Concat(string w)
    {
        word = w;
        // cout<<word<<endl;
    }
    Concat operator +(Concat y)
    {
        Concat c;
        c.word = word + y.word;
        return c;
    }
    void display()
    {
        cout << "String: " << word << endl;
    }
};
int main()
{
    Concat c("Hello,");
    Concat w("World!");
    Concat z;
    z = c + w;
    z.display();
    return 0;
}