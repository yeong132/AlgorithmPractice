#include <string>
#include <vector>

using namespace std;

int maxDiv(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 두 수의 곱을 최대공약수로 나누면 최소공배수가 된다. 이걸 기억하고 최대공약수만 구해보자.
vector<int> solution(int n, int m) {
    vector<int> answer;
    int maxDivisor = 0;
    int minMultiple = 0;
    
    maxDivisor = maxDiv(n, m);
    
    minMultiple = n * m / maxDivisor;
    
    answer.push_back(maxDivisor);
    answer.push_back(minMultiple);
    
    return answer;
}