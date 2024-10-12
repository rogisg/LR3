//задача 10
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string a;
    cin >> a;

    int s = a.length();
    double c = count(a.begin(), a.end(), 'a');
    cout<<c / s * 100<<"%"<<endl;
 
return 0;
}
