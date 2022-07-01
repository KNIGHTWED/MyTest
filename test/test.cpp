#include <iostream>

using namespace std;

int main() {
    int a[3]={};
    string s[3];

    for (int i = 0; i < 3; i++)
    {
        cin>>s[i];
        if(s[i]=="hi"){
            cin>>a[i];
        }

    }
    
    for (int i = 0; i < 3; i++)
    {
        cout<<s[i]<<" "<<a[i]<<"\n";
    }
    cout<<endl;
    return 0;
}