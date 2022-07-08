#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int solution(int left, int right);

int main() {
    int left = 13, right = 17;

    cout << "1번 예제: ";

    cout << solution(left, right);
    // 정답 43
    cout << endl;


    left = 24;
    right = 27;

    cout << "2번 예제: ";

    cout << solution(left, right);
    // 정답 52
    cout << endl;
    return 0;
}

int solution(int left, int right) {
    cout<<"\n";
    int answer = 0;
    int count = 0;
    for (int i = left; i <= right; i++)
    {
        cout << i << " 의 약수 : ";
        for (int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
                cout << j << " ";
            }
        }
        cout << "총 " << count << " 개\n";
        if(count % 2 == 0)
        {
            answer += i;
        } else 
        {
            answer -= i;
        }
        count = 0;
    }
    
    cout << "\n\n";
    return answer;
}