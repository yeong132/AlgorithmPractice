#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    float result1 = (float)num1 / (float)num2;
    float result2 = result1 * 1000;
    int answer = (int)result2;
    return answer;
}