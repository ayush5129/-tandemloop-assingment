#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout << "Enter the value of a: ";
    cin >> a;
    int n;
    // check n is odd or even 
    if (a % 2 == 0){
        n = a - 1;
    }
    else{
        n = a;
    }
    for (int i = 0; i < n; i++) {
        cout << (2 * i + 1);
        // If the values ​​are to be separated by comma
        if (i != n - 1) cout << ", ";
    }
    return 0;
}
