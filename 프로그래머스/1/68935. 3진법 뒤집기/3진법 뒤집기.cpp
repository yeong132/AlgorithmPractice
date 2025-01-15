#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 10진법에서 각 자릿수 구하는 방법을 생각해보자.
int solution(int n) {
    int answer = 0;
    vector<int> numbers;
    int digitCount = 1;
    
    while(n)
    {
        numbers.push_back(n % 3);
        n /= 3;
    }
    
    // 배열 뒤집는 함수는 검색을 통해 알게 되었다.
    reverse(numbers.begin(), numbers.end());
    
    for(int i = 0; i < numbers.size(); ++i)
    {
        answer += numbers[i] * digitCount;
        digitCount *= 3;
    }
    
    return answer;
}