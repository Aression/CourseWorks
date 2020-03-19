/*#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int value;
    char stamp;
    bool flag = true;
    cout << "Please enter one of the following Choices:" << endl;
    cout << "c) carnivore\tp) pianist\nt) tree\tg) game" << endl;
    
    while (flag)
    {
        cout << "Please enter a c, p, t, or g: ";
        cin >> stamp;
        if (stamp == 'c')
        {
            value = 1;
        }
        else if (stamp == 'p')
        {
            value = 2;
        }
        else if (stamp == 't')
        {
            value = 3;
        }
        else
        {
            value = 4;
        }
        
        
        switch (value)
        {
        case 1:
            cout << "A carnivore is a kind of animal which eat other anminals.";
            flag = false;
        case 2:
            cout << "A pianist can play piano very well.";
            flag = false;
        case 3:
            cout << "A maple is a tree.";
            flag = false;
        case 4:
            cout << "Minecraft is a game.";
            flag = false;
        default:
            continue;
        }
    }
    return 0;
}*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char stamp;
    bool flag = true;
    cout << "Please enter one of the following Choices:" << endl;
    cout << "c) carnivore\tp) pianist\nt) tree\tg) game" << endl;
    
    while (flag)
    {
        cout << "Please enter a c, p, t, or g: ";
        cin >> stamp;
        switch (stamp)
        {
        case 'c':
            cout << "A carnivore is a kind of animal which eat other anminals.";
            flag = false;
        case 'p':
            cout << "A pianist can play piano very well.";
            flag = false;
        case 't':
            cout << "A maple is a tree.";
            flag = false;
        case 'g':
            cout << "Minecraft is a game.";
            flag = false;
        default:
            continue;
        }
    }
    return 0;
}

