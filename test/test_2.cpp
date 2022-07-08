#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
vector<int> solution(vector<int> array, vector<vector<int>> commands);

int main() {
  vector<int> array = {1,5,2,6,3,7,4};
  vector<vector<int>> commands = {{2,5,3}, {4,4,1}, {1,7,3}};
  // 1.
  // 5 2 6

  cout << "1번 예제: ";
  for (auto an : solution(array, commands))
  {
    cout << an << " ";
  }
  cout << endl;  
  // 답은 5, 6, 3
  solution(array, commands);
  return 0;
}


vector<int> solution(vector<int> array, vector<vector<int>> commands){
  vector<int> answer;
  vector<int> tmp;
  int start, finish, check;
  
  for (int i = 0; i < commands.size(); i++)
  {
    start = commands[i][0] - 1;
    finish = commands[i][1];
    check = commands[i][2] - 1;
    for(int j = start; j < finish; j++){
      tmp.push_back(array[j]);
    }
    sort(tmp.begin(), tmp.end());
    // for (auto an : tmp)
    // {
    //   cout << an << " ";
    // }
    // cout<< endl;
    
    answer.push_back(tmp[commands[i][2]-1]);
    // cout << answer[i]<<endl;
    tmp.clear();
  }


  return answer;
}
