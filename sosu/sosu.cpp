#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int solution(string numbers);

int main() {
  string q1 = "12";
  string q2 = "123";
  // string q1 = "17";
  // string q2 = "011";
  int array_num[7]={0,};

  cout << "1번 예제 : " << solution(q1) << endl;
  cout << "2번 예제 : " << solution(q2) << endl;
  
  return 0;
}

// numbers는 길이 1 이상 7 이하 문자열
// numbers는 0~9 까지의 숫자
// "013"은 숫자 0, 1, 3 이 적힌 카드가 흩어져 있음
// numbers는 숫자카드이고 각각의 카드를 조합해서 소수인 수의 개수를 구하는 것.

int solution(string numbers) {
    int answer = 0;
    int array_num[7];
    int notzero = 0;

    for (int i = 0; i < numbers.length(); i++)
    {
      array_num[i] = (int)numbers[i] - 48;
      if(array_num[i] != 0) notzero += 1;
      // cout << array_num[i] << " ";
    }
    // cout << "\n";
    for (int i = 0; i < numbers.length(); i++)
    {
      if(numbers.length() > 2){
        for (int j = 0; j < numbers.length(); j++)
        {
          if(i != j){
            array_num[i]*10 + array_num[j];
          }
        }
        
      }
    }
    
    
    

    return answer;
}