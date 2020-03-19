#include <iostream>//可用numeric
using namespace std;

int main(int argc, char const *argv[])
{
    int ori_value[16] = {};
    int res_value[4][4] = {};
    int stamp = 0,sum = 0;
    for (int i = 0; i < 16; i++)
    {
        cin >> ori_value[i];
    }
    for (int j = 0; j < 4; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            res_value[j][k] = ori_value[k+stamp];
        }
        stamp += 4;
    }
    for (int m = 0; m < 4; m++)
    {
        for (int n = 0; n < 4; n++)
        {
            sum += res_value[m][n];
        }
        if (m != 3)
        {
            cout << sum << " ";
        }
        else
        {
            cout << sum;
        }
        sum = 0;
    }
    return 0;
}
