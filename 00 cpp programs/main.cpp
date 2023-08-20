#include<iostream>

using namespace std;

// Component class representing a display
class Display{
    public: 
        void show(const string& message){
            cout<<"Displaying: "<<message<<endl;
        }
};

// Component class representing a speaker
class Speaker{
    public:
    void playSound(const string& sound){
        cout<<"Playing sound: "<<sound<<endl;
    }
};

class MultimediaPlayer{
    private:
        Display display; // Composition: MultimediaPlayer contains a Display
        Speaker speaker; // Composition: MultimediaPlayer contains a Speaker

    public:
        void playMedia(const string&media){
            display.show(media);
            speaker.playSound(media);
        }
};
int main(){
    MultimediaPlayer player;
    player.playMedia("Movie Title");
    return 0;
}