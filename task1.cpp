//задача 1

#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int n, a;
    cin >> n >> a;
    
    
    double arr[n];
    for (int i = 0; i < n + 1; i++) {
        arr[i] = rand() % 100; 
    }
    for (int i = 0; i < n; i++){
        cout << "arr" << i << "=" << arr[i] << endl;
    }
    int f_el = arr[0];
    for (int i = 0; i < n; i++){
        arr[i] = (((arr[i]*2)-a)/f_el);
    }    
    
    for (int i = 0; i < n; i++){
        cout << "arr_new" << i << "=" << arr[i] << endl;
    }
    return 0;
}
