//задача 6
#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, b;
    cin >> a;
    cin >> b;
    int s1 = a.length();
    int s2 = b.length();
    if (s1 > s2){
        cout<<"1 >"<<endl;
    }else if(s2 > s1){
        cout<<"2 >"<<endl;
    }else{
        cout<<"odinakovo"<<endl;
    }

return 0;
}
