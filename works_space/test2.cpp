#include<iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void show(box);
void doVolume(box*);
void use(box*,void(*pa)(box),void(*pi)(box*));

int main()

{
    box thing1;
    cout<<"enter the maker: ";
    cin.getline(thing1.maker,40);
    cout<<"enter the height: ";
    cin>>thing1.height;
    cout<<"enter the width: ";
    cin>>thing1.width;
    cout<<"enter the length: ";
    cin>>thing1.length;

    use(&thing1,show,doVolume);
	return 0;
}
void show(box thing)
{
    cout<<"Here is the data\n";
    cout<<"the maker: "<<thing.maker<<endl;
    cout<<"the height: "<<thing.height<<endl;
    cout<<"the width: "<<thing.width<<endl;
    cout<<"the length: "<<thing.length<<endl;
    cout<<"the volume: "<<thing.volume<<endl;
}
void doVolume(box* pi)
{
    pi->volume=pi->height*pi->length*pi->width;
}
void use( box* pc,void(*pa)(box),void(*pi)(box*))
{
    (*pi)(pc);
    (*pa)(*pc);
}