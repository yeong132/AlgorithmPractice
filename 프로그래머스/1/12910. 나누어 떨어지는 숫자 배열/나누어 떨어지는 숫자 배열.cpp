#include <string>
#include <vector>
#include <algorithm> // sort함수 사용

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    //iterator가 내부적으로 작동하는 향상된 for문이다!
    for(int num : arr){
        if(0 == num % divisor) {
            answer.push_back(num);
        } 
    }
    
    // 어떻게 빈 배열일 때만 -1을 반환하지 생각하다 검색을 통해 .empty()를 찾았다.
    if(answer.empty()) 
        answer.push_back(-1);
    else
        sort(answer.begin(), answer.end());
    
    return answer;
}