#include <string>
#include <vector>

using namespace std;

// 내적은 두 벡터의  인덱스별로 원소를 각각 곱한뒤 그걸 모두 합한 값을 말한다.
// 이걸 스칼라값이라 말한다.
int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    for(int i=0; i<a.size(); ++i){
        answer += a[i] * b[i];
    }
    return answer;
}