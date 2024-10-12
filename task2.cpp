//задача 2

#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    srand(time(0));
    int n, k1, k2, l1, l2;
    cin >> n >> k1 >> k2 >> l1 >> l2;

    double arr[n], sar, sar1;
    int s, s1, s2, s3, s4, s5 = 0;
    


    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }


    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }


    for (int i = 0; i < n; i++) {
        s += arr[i];
    }
    cout << "summa = " << s << endl;
    
    
    for (int i = 0; i < n; i++) {
        s1 += arr[i] * arr[i];
    }
    cout << "summa kvadratov = " << s1 << endl;
    
    for (int i = 0; i < 6; i++) {
        s2 += arr[i];
    }
    cout << "summa pervih shesti = " << s2 << endl;
    
    
    for (int i = k1 - 1; i < k2; i++) {
        s3 += arr[i];
    }
    cout << "summa s "<<k1<<" do "<< k2<<" = " << s3 << endl;
    
    
    for (int i = 0; i < n; i++) {
        s4 += arr[i];
        sar = s4 / n;
    }
    cout << "srednee arifmeticheskoe = " << sar << endl;
    
    
    for (int i = l1 - 1; i < l2; i++) {
        s5 += arr[i];
        sar1 = s5 / (l2 - l1 + 1);
    }
    cout << "srednee arifmeticheskoe s "<<l1<<" do "<< l2<<" = " << sar1 << endl;




    return 0;
}
