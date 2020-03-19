#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
   /*int num = 233;
   int *p = &num;
   cout << *p << endl;
   system("pause");*/
   // 注意命名时加*是注明该变量是一个指针变量，使用时，加星号表示输出对象是该指地址对应的内容
   
   /*int list[5] = {1,2,6,5,8};
   int *p = NULL;
   p = &list[0];
   for (int i = 0; i <= 4; i++)
   {
      cout << "the address of the element now is " << p << endl;
      cout << "the " << i << "th element of the list is: ";
      cout << *p << endl;
      p++;
      //定义指针变量时的指定类型决定了其加一的时候的跨度
   }
   system("pause");
   return 0;*/

   //注意在windows和linux中十六进制数在内存中的存储是两位占一个bit
   int num = 0x01020304;
   short *p = &num;
   p += 1;
   cout << p;
   system("pause");
   return 0;
}