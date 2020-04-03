#include <iostream>
using namespace std;

struct box
{
    char maker[40] = {};
    float height = 0;
    float width = 0;
    float length = 0;
    float volume = 0;
};

// function prototypes
box filler(box value);
void func1(box value);
void func2(box* pv);


int main(int argc, char const* argv[])
{
    box obj1,obj2;
    box* pv1;

    cout << "Tier one: \n";

    obj2 = filler(obj1);pv1 = &obj2;//create the pointer and filled obj
    func1(obj2);

    cout << "Tier two,func2 ativiated: \n";
    func2(pv1);//second part

    return 0;
}

//fill the box and return the result
box filler(box value)
{
    cout << "Enter the maker: ";
    cin.getline(value.maker, 40);
    cout << "Enter the height: ";
    cin >> value.height;cin.get();
    cout << "Enter the width: ";
    cin >> value.width;cin.get();
    cout << "Enter the length: ";
    cin >> value.length;cin.get();
    cout << "Enter the volume: ";
    cin >> value.volume;cin.get();
    return value;
}

//print the elements 
void func1(box value)
{
    cout << "maker: " << value.maker << endl;
    cout << "height: " << value.height << endl;
    cout << "width: " << value.width << endl;
    cout << "length: " << value.length << endl;
    cout << "volume: " << value.volume << endl;
}
//print the element in another way
void func2(box* pv)
{
    (*pv).volume = ((*pv).height) * ((*pv).width) * ((*pv).length);
    cout << "maker: " << (*pv).maker << endl;
    cout << "height: " << (*pv).height << endl;
    cout << "width: " << (*pv).width << endl;
    cout << "length: " << (*pv).length << endl;
    cout << "volume: " << (*pv).volume << endl;
}