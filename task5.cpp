//задача 5
#include <iostream>
#include <string>
using namespace std;
int main() {
    string n;
    cin >> n;
    int s = n.length();
    if (s % 2 == 0){
        cout<<"chetno"<<endl;
    }else{
        cout<<"ne chetno"<<endl;
    }

return 0;
}
