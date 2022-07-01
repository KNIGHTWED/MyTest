#include <iostream>
#include <string>
#include <vector>
vector<string> participant = {"leo", "kiki", "eden"};
vector<string> completion = {"eden", "kiki"};
using namespace std;

string solution(vector<string> participant, vector<string> completion);

int main() {

  string answer = "";

  cout << "참가 : " << participant.size() << " 명" << endl;
  cout << "완주 : " << completion.size() << " 명" << endl;
  answer = solution(participant, completion);

  cout << answer << endl;

  return 0;
}

string solution(vector<string> participant, vector<string> completion) {
  string answer = "";
  for (int i = 0; i < participant.size(); i++)
  {
    /* code */
  }
  

  return answer;
}