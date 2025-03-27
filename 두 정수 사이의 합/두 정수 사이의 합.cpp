//프로그래머스 두 정수 사이의 합 문제
/*
     문제의 핵심은 시작 a 와 끝 b 까지의 등차수열을 구하는 것이 핵심. a와 b의 대소 관계가 확실하지 않기 때문에 대소 관계 체크 후 반복문으로 처리. 
     문제자체는 쉽지만 다른 사람의 풀이 중 시그마 공식을 이용하여 반복문없이 등차수열의 합을 구하거나 
     비트 연산을 사용하여 a와b의 값을 교체 (xor)연산 이후 0부터 a 까지 0부터 b까지의 의 수를 빼면 a~b사이의 등차수열의 합이 나오는 계산이 인상에남음..
   
    시그마 공식 활용
    return (long long)(a + b) * (abs(a - b) + 1) / 2;

    비트 연산
    if (a > b) a ^= b ^= a ^= b;
    answer = (long long)b * -~b / 2 - (long long)a * ~-a / 2;
    return answer;

    시그마 공식중에는 등차수열의 합 외에도 제곱수 의 합 세제곱수의 합등 공식등은 나중에 써먹을수도 있을 듯 하다.

*/


#include <iostream>
#include <string>
#include <vector>
#include <numeric> 

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int start = std::min(a, b);
    int end = std::max(a, b);

    for (int i = start; i <= end; i++)
    {
        answer += i;
    }

    return answer;
}
int main()
{
    std::cout << "Hello World!\n";
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
