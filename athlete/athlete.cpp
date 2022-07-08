#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
string solution(vector<string> participant, vector<string> completion);
int main() {
  vector<string> participant = {"mislav", "stanko", "mislav", "ana"};
  vector<string> compleiton = {"stanko", "ana", "mislav"};

  cout << solution(participant, compleiton);

  return 0;
}

string solution(vector<string> participant, vector<string> completion) {
  string answer = "";
  sort(participant.begin(), participant.end());
  sort(completion.begin(), completion.end());

  for (auto iter = completion.rbegin(); iter != completion.rend(); ++iter)
  {
    if(participant.back() != *iter){
      answer = participant.back();
      break;
    }
    participant.pop_back();
  }
  if(answer.empty()){
    answer = participant[0];
  }
  return answer;
}
