//задача 7
#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int s1 = a.length();
    int s2 = b.length();
    int s3 = c.length();
    if ((s1 > s2) && (s1 > s3) && (s2 > s3)){
        cout<<"max - "<<a<<"min - "<<c<<endl;}
    if ((s1 > s2) && (s1 > s3) && (s2 < s3)){
        cout<<"max - "<<a<<"min - "<<b<<endl;}
    if ((s2 > s1) && (s2 > s3) && (s1 > s3)){
        cout<<"max - "<<b<<"min - "<<c<<endl;}
    if ((s2 > s1) && (s2 > s3) && (s1 < s3)){
        cout<<"max - "<<b<<"min - "<<a<<endl;}
    if ((s3 > s2) && (s3 > s1) && (s1 > s2)){
        cout<<"max - "<<c<<"min - "<<b<<endl;}
    if ((s3 > s2) && (s3 > s1) && (s1 < s2)){
        cout<<"max - "<<c<<"min - "<<a<<endl;}

return 0;
}
