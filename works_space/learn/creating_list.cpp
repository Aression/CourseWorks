#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector< vector<int> > arry;
    vector<int> d;
    int i,j,k,n;
    int number;

    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&number);
            d.push_back(number);
        }
        sort(d.begin(),d.end());
        arry.push_back(d);
        d.resize(0);
    }
    if (arry.empty())
    {
        printf("0\n");
    }
    else
    {
        for ( i = 0; i < arry.size(); i++)
        {
            for ( j = 0; j < arry[0].size(); j++)
            {
                printf("%d",arry[i][j]);
            }
            printf("\n");
        }
    }
    system("pause");
    return 0;
}