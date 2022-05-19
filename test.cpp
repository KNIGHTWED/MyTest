#include <iostream>

using namespace std;

int main() {
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    char name = 'A';
    // char 로 문자열을 표현할때는 필요한 문자열의 길이에 +1 해야한다.
    // 문자열 끝을 알려주는 문자가 들어가기 때문이다
    char names[10] = "KimKimKim";
    // 한글은 1글자에 3바이트를 차지한다.(2바이트로 배웠는데 3바이트로 계산하면 맞는 이유는??)
    char knames[7] = "정민";
    int input;

    cout << knames << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i];
    }
    cout << endl;

    if (arr[1] % 2 == 0){
        cout << arr[1] << " 은(는) 짝수입니다." << endl; 
    }
    else {
        cout << arr[1] << " 은(는) 홀수입니다." << endl; 
    }

    switch (2){
        case 1:
            cout << "첫번째 선택" << endl;
            break;
        case 2:
            cout << "두번째 선택" << endl;
            break;
        case 3:
            cout << "첫번째 선택" << endl;
            break;
        default:
            break;
    }
    

    // input은 >>
    /*
    cin >> input;
    cout << "입력값: " << input << endl;
    */
    return 0;
}