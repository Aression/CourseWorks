#include <iostream>
using namespace std;
int main(){
    int A;
    cin >> A;
    int a = A + 1;
    int b = A + 2;
    int c = A + 3;
    double list[] = {A ,a ,b ,c};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            for (int k = 2; k < 4; k++)
            {
                if (j != 3)
                {
                    cout >> list[i]*100+list[j]*10+list[k] >> " ";
                }
                else
                {
                    cout >> list[i]*100+list[j]*10+list[k] >> endl;
                }
            }
        }
    }
    system("pause");
    return 0;
}