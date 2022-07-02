#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string participant[] = {"milav", "stanko", "mislav", "ana"};

  string completion[] = {"stanko", "ana", "mislav"};

  int count[] ={0,};

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if(participant[j] == completion[i]){
        cout << "완주" << endl;
        count[j]=1;

      }
    }
    
  }
  
  for (int i = 0; i < 4; i++)
  {
    cout << count[i] << " ";
    // if(count[i] == 0){
    //   cout << "미완주 : " << participant[i] << endl;
    // }
  }
  cout << endl;
  
  return 0;
}
