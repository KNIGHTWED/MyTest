#include <iostream>
#include <stack>

using namespace std;
// 함수
void push(int num){

}
int main() {
  ios::sync_with_stdio(false);
  stack<int> stack;
  int count;

  // 1. 총 입력할 명령의 갯수 입력
  cin>>count;

  int number;
  string order;
  
  // 2. 명령어를 입력한 갯수 만큼 입력
  for (int i = 0; i < count; i++)
  {
    cin>>order;

    // push X: 정수 X를 스택에 넣는 연산이다.
    if (order=="push")
    {
      cin>>number;
      stack.push(number);
    }

    // pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    if (order=="pop")
    {
      if (stack.empty()==true)
      {
        cout<<-1<<"\n";
      } else {
        cout<<stack.top()<<"\n";
      }
      stack.pop();
    }

    // size: 스택에 들어있는 정수의 개수를 출력한다.
    if (order=="size")
    {
      cout<<stack.size()<<"\n";
    }

    // empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
    if (order=="empty")
    {
      if (stack.empty()==true)
      {
        cout<<1<<"\n";
      } else {
        cout<<0<<"\n";
      }
    }

    // top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    if (order=="top")
    {
      if(stack.empty()==true){
        cout<<-1<<"\n";
      } else {
        cout<<stack.top()<<"\n";
      }
    }
  }
  cout<<endl;
  return 0;
}