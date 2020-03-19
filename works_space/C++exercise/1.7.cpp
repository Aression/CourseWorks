#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    int f(int a,int b,int c);
    cin>>a>>b>>c;
    c = f(a,b,c);
    cout<<c<<endl;
    system("pause");
    return 0;
}
int f(int x,int y,int z)
{
    int m;
    if (x<y) m = x;
        else m = y;
    if (z<m) m = z;
    return m;
}