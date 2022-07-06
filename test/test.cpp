#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
// int solution(int a);

// 첫재 줄에 정수 N(0 <= N <= 12) 이 주어진다. N!을 출력
int main() {
    vector<string> v1 {"abcd"};
    vector<int> v2(5,10);
    vector<int> v3(v2);

    // vector.at(int) 느리다, 안전하다 (범위점검)
    cout << "v1.at(1) = " << v1.at(1) << "\n";

    // vector[int] 빠르다(범위점검 안함)
    cout << "v1[2] = " << v1[2] << "\n";

    // vector.front(), vector.back()
    cout << "v1.front() = " << v1.front() << ", v1.backt() = " << v1.back() << "\n";

    // v.clear() 벡터의 모든 원소 제거(size만 줄고 capacity는 남아있다.
    v1.clear();
    cout << "v1.clear();\n";
    
    // v.push_back()
    v1.push_back("z");
    cout << "v1.push_back(""z""); clear 후 첫번째 삽입 요소 = " << v1.front() << "\n";
    // cout << "벡터 v1의 3번째 요소 = " << v1.at(3) << "\n";
    // cout << "벡터 v1의 3번째 요소 = " << v1.at(3) << "\n";
    // cout << "벡터 v1의 3번째 요소 = " << v1.at(3) << "\n";
    // cout << "벡터 v1의 3번째 요소 = " << v1.at(3) << "\n";
    // cout << "벡터 v1의 3번째 요소 = " << v1.at(3) << "\n";
    
    return 0;
}

// int solution(int a){
//     if(a <= 1) return 1;
//     return a * solution(a - 1);
// }