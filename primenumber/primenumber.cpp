#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
string solution(vector<int> numbers);
bool compare(string a, string b);

int main() {
  
  vector<int> q1 = {6, 10, 2};
  vector<int> q2 = {3, 30, 34, 5, 9};
  string answer = "";

  answer = solution(q1);
  cout << "1번 예제: " << answer << "\n";

  answer = solution(q2);
  cout << "2번 예제: " << answer << endl;
  return 0;
}

string solution(vector<int> numbers){
  string answer = "";
  vector<string> tmp;

  for(auto num : numbers){
    tmp.push_back(to_string(num));
  }

  sort(tmp.begin(), tmp.end(), compare);

  if(tmp.at(0) == "0"){
    return "0";
  }

  for(auto num : tmp){
    answer += num;
  }
  return answer;
}

bool compare(string a, string b) {
  if(a+b > b+a){
    cout << a << " + " << b << " > " << b << " + " << a << "\n";
  } else {
    cout << a << " + " << b << " < " << b << " + " << a << "\n";
  }
  return a + b > b + a;
}