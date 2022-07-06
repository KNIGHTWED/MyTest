#include <iostream>

using namespace std;
int solution(int f);

int main() {
    int input;
    
    // cin >> input;
    input = 10;
    cout << solution(input) << endl;
    return 0;
}

int solution(int f){
    if(f <= 1) return 1;
    return f*solution(f-1);
}