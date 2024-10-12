//задача 3

#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    srand(time(0));
    int n = 20;
    int a, b, c;


    double arr[n];
    


    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }


    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
        a = arr[0];
        b = arr[1];
        c = arr[2];
        arr[0] = arr[17];
        arr[1] = arr[18];
        arr[2] = arr[19];
        arr[17] = a;
        arr[18] = b;
        arr[19] = c;
    
    
    for (int i = 0; i < n; i++) {
        cout << "arrnew[" << i << "] = " << arr[i] << endl;
    }


   
    return 0;
}
