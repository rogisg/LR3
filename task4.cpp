//задача 4

#include <iostream>



using namespace std;

int main() {

    int n;
    cin>>n;


    double arr[n];
    


    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 - 50;
    }


    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    
    
     for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            break;
        }
    }
    
    
    
    for (int i = n - 1; i >= 0; i--) {
        if (int(arr[i]) % 2 == 0) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            break;
        }
    }
    
    cout<<"massiv posle udaleniya pervogo otritsatelnogo i poslednego chetnogo el-ov:"<<endl;
    for (int i = 0; i < n; i++) {
        cout <<"arr[" << i << "] = " << arr[i] << endl;
    }
        
    return 0;
}
