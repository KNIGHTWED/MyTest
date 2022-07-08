#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
vector<int> solution(string s);

int main() {
    cout << "1번 예제\n";
    // solution(10, 2);
    for(auto a : solution("110010101001")){
        cout << a << " ";
    }

    cout <<"\n2번 예제\n";
    for(auto a : solution("01110")){
        cout << a << " ";
    }

    cout <<"\n3번 예제\n";
    for(auto a : solution("1111111")){
        cout << a << " ";
    }
    return 0;
}

vector<int> solution(string s) {
    vector<int> answer;
    

    return answer;
}