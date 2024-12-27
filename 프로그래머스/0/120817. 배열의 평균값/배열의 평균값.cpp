#include <string>
#include <vector> // vector는 배열의 크기를 return하는 size()함수를 제공한다. << 검색으로 알게된 사실

using namespace std;

double solution(vector<int> numbers) {
    double result = 0;
    double answer = 0;
    // numbers의 평균 값을 구하려면 'numbers 원소의 총합 / numbers 배열의 길이'를 하면 된다.
    for(int i = 0; i < numbers.size(); i++) {
        result += numbers[i]; 
    }
    answer = result / numbers.size();
    return answer;
}