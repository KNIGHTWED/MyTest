#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;
int solution(vector<vector<string>> clothes);

int main() {
  vector<vector<string>> clothes = {{"yellow_hat", "headgear"}, {"blue_sunglasses", "eyewear"}, {"green_turban", "headgear"}};
  
  cout << "1번 예제: " << solution(clothes) << "\n";



  return 0;
}

int solution(vector<vector<string>> clothes) {
  // answer가 1인 이유는 곱셈에 있어 0을 곱해주면 답이 0이 되기 때문.
  int answer = 1;
  vector<string> kinds;
  map<string, vector<string>> closet;

  for (int i = 0; i < clothes.size(); i++)
  {
    kinds.push_back(clothes[i][1]);
    closet[clothes[i][1]].push_back(clothes[i][0]);
  }

  sort(kinds.begin(), kinds.end());
  // erease 와 unique를 함께 사용하면 unique로 중복을 뒤로 보내고 뒤로 보내진 중복된 요소는 삭제된다.
  // 의상의 종류중 중복되는 요소를 삭제한다.
  kinds.erase(unique(kinds.begin(), kinds.end()), kinds.end());

  // 옷의 종류만큼 반복
  // 
  for(int i = 0; i < kinds.size(); ++i){
    answer *= (closet[kinds[i]].size() + 1);
  }

  return answer - 1;
}