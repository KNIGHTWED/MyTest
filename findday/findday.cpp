#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
string solution(int a, int b);

int main() {
    int qa = 5, qb = 24;

    cout << "1번 예제: ";
    cout << solution(qa, qb);
    cout << endl;
    return 0;
}


string solution(int a, int b) {
    string answer = "";
    string day[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int monthday[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int result = 0;
    for(int i = 0; i < a - 1; i++){
        result += monthday[i];
    }
    result += b;
    result = result % 7;
    if(result == 0){
        answer = day[4];
    } else if(result == 1){
        answer = day[5];
    } else if(result == 2){
        answer = day[6];
    } else if(result == 3){
        answer = day[0];
    } else if(result == 4){
        answer = day[1];
    } else if(result == 5){
        answer = day[2];
    } else if(result == 6){
        answer = day[3];
    }
    
    return answer;
}
