#include<iostream>
#include<string>
using namespace std;
int process(int x){
    int res = x%12;
    return res;
}
int main(){
    string orgin;
    string hour,min;
    cin >> orgin;
    int where = orgin.find(':');
    int len = orgin.length();
    hour = orgin.substr(0,where);
    min = orgin.substr(where+1,len-where);
    int h = std::stoi(hour);
    int m = std::stoi(min);
    int res_h = process(h);
    int res_m = m;
    if (h<12) cout << res_h << ":" << res_m << " AM";
    else if (h>12) cout << res_h << ":" << res_m << " PM";
    else cout << 12 << ":" << res_m << " PM";
    system("pause");
    return 0;
}