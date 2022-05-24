#include <iostream>

using namespace std;

int main() {
    long long int a, b, c;
    long long int rst = 0;

    cin >> a >> b >> c;
    rst = a / (c - b) + 1;
    
    if(c>b){
        cout << rst << endl;
    }
    else{
        cout << -1 << endl;
    }
    
    return 0;
}