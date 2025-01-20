#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    
    // 검색을 통해 반복 for문을 통해 처리할 수 있다는 것을 알았다.
    for(int i = 0; i < number.size()-2; ++i){
        for(int j = i+1; j < number.size()-1; ++j){
            for(int k = j+1; k < number.size(); ++k){
                if(number[i] + number[j] + number[k] == 0)
                {
                    answer++;
                }
            }
        }
    }
    
    return answer;
}