#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers, int target);

int main() {
  vector<int> q1 = {1,1,1,1,1};
  vector<int> q2 = {4,1,2,1};
  int t1 = 3;
  int t2 = 4;
  int answer = 0;

  answer = solution(q1, t1);
  cout << "1번 예제" << answer << "\n";

  answer = solution(q2, t2);
  cout << "2번 예제" << answer << endl;

  return 0;
}

// DFS 문제
// 깊이 우선 탐색
// 

int solution(vector<int> numbers, int target) {
    int answer = 0;

    return answer;
}

int dfs(vector<int> numbers, int x) {
  if(numbers[x]) return;
  numbers[x] = true;
  cout << x << ' ';
  for (int i = 0; i < count; i++)
  {
    /* code */
  }
  
}