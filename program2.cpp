#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cout << "Enter the value of a: ";
    cin >> a;
    for (int i = 0; i < a; i++) {
        cout << (2 * i + 1);
        // If the values ​​are to be separated by comma
        if(i != a-1) cout<<",";
    }
    return 0;
}
