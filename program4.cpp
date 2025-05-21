#include<bits/stdc++.h>
using namespace std;
vector<int> countMultiple(vector<int>& num) {
    vector<int> count(10, 0);
    for (auto val : num) {
        for (int i = 1;i<= 9; i++) {
            if (val % i == 0) {
                count[i]++;
            }
        }
    }
    return count;
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> num(n);
    cout << "Enter the number: ";
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    vector<int>res = countMultiple(num);
    // Display the result
    cout << "{";
    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << res[i];
        if (i != 9) cout << ", ";
    }
    cout << "}" << endl;
    return 0;
}
