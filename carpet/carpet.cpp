#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
vector<int> solution(int brown, int yellow);

int main() {
    cout << "1번 예제\n";
    // solution(10, 2);
    for(auto a : solution(10, 2)){
        cout << a << " ";
    }

    cout <<"\n2번 예제\n";
    for(auto a : solution(8, 1)){
        cout << a << " ";
    }

    cout <<"\n3번 예제\n";
    for(auto a : solution(24, 24)){
        cout << a << " ";
    }
    return 0;
}

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int length = (brown-4)/2;
    if(yellow == 1) {
        answer.push_back(3);
        answer.push_back(3);
    }
    if(yellow > 1) {
        for(int i = length-1; i >=1; i--) {
            // cout << i+1 << " * " << length-i << "\n";
            if(i * (length-i) == yellow) {
                answer.push_back(i+2);
                answer.push_back(length-i+2);
                break;
            }
        }
    }
    return answer;
}