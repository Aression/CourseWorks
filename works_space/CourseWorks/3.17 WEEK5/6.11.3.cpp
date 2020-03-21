
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
            break;
        case 'p':
            cout << "A pianist can play piano very well.";
            flag = false;
            break;
        case 't':
            cout << "A maple is a tree.";
            flag = false;
            break;
        case 'g':
            cout << "Minecraft is a game.";
            flag = false;
            break;
        default:
            continue;
        }
    }
    return 0;
}

