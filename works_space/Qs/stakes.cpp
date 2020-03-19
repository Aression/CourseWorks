#include<iostream>
using namespace std;
int main()
{
    float open,high,low,close;
    cin >> open >> high >> low >> close;
    if (close < open)
    {
        if (low < close && high > open)
        {
            cout << "BW-Solid with Lower Shadow and Upper Shadow";
        }
        if (low < close && high <= open)
        {
            cout << "BW-Solid with Lower Shadow";
        }
        if (low >= close && high > open)
        {
            cout << "BW-Solid with Upper Shadow";
        }
        else
        {
            cout << "BW-Solid";
        }
        
    }
    if (close > open)
    {
        if (low < open && high > close)
        {
            cout << "R-Hollow with Lower Shadow and Upper Shadow";
        }
        if (low < open && high <= close)
        {
            cout << "R-Hollow with Lower Shadow";
        }
        if (low >= open && high > close)
        {
            cout << "R-Hollow with Upper Shadow";
        }
        else
        {
            cout << "R-Hollow";
        }
        
    }
    if (close == open)
    {
        if (low < open && high > close)
        {
            cout << "R-Cross with Lower Shadow and Upper Shadow";
        }
        if (low < open && high <= close)
        {
            cout << "R-Cross with Lower Shadow";
        }
        if (low >= open && high > close)
        {
            cout << "R-Cross with Upper Shadow";
        }
        else
        {
            cout << "R-Cross";
        }
        
    }
    system("pause");
    return 0;
}