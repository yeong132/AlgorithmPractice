#include <string>
#include <vector>

using namespace std;

// 1. n의 각 자릿수를 배열에다 넣는다.
// 2. 배열의 인덱스대로 내림차순 정렬하면 끝!

long long solution(long long n) {
    
    // 답안의 연산을 위해 사용
    long long answer = 0;
    long long result = 0;
    long long plus_digit = 1;
    
    
    // n이 몇 자릿수인지 구하기 위해 사용
    string stn = to_string(n);
    int length = stn.size();
    
    // 정렬할 때 비교를 하고 서로 값을 바꿀때 임시로 저장할 공간이 필요
    int temp;
    int length_temp = length;
    
    vector<int> numbers;
    
    for(int i = 0; i < length; ++i) {
        numbers.push_back(n % 10);
        n /= 10;
    }    
    
    // 작은 수를 점점 뒤로 보내는 내림차순 정렬(재사용)
    for(int j = 0; j < length - 1; ++j) {
        for(int k = 0; k < length - j - 1; ++k) {
            if(numbers[k] < numbers[k+1]) {
                temp = numbers[k];
                numbers[k] = numbers[k+1];
                numbers[k+1] = temp;
            }
        }
    }
    
    // 여기서 for문의 조건을 length로 줘버리면 length가 점점 줄어들어 오류가 발생한다.
    // 그래서 처음 length값을 legnth_temp같이 임시저장할 곳에 넣어놓고 사용했다.
    for(int p = 0; p < length_temp; ++p) {
        result = numbers[length-1] * plus_digit; 
        answer += result;
        length--;
        plus_digit *= 10;
    }
    
    return answer;
}