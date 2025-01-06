#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int result = 0;
    int answer = 0;
    
    // 의도는 이게 아닌거 같은데 방법이 이거밖에 생각이 안난다. 나중에 다시 풀어보자.
    for(auto it = numbers.begin(); it < numbers.end(); ++it){
        result += *it;
    }
    answer = 45 - result;
    
    return answer;
}