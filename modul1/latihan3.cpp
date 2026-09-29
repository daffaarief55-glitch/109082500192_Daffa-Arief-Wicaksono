#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "input: ";
    cin >> n;
    cout << "output:" << endl;

   
    for (int i = n; i >= 1; i--) {
        
       
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        
        cout << "* ";

        
        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }

        
        cout << endl;
    }

    return 0;
}
