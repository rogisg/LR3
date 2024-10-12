//задача 9
#include <iostream>
#include <string>
using namespace std;
int main() {
    string a;
    cin >> a;

    int s = a.length();
    cout << string(s, '*') << a << string(s, '*') << endl;
 
return 0;
}
