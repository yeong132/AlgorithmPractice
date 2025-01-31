#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for(int i = 0; i < numbers.size()-1; ++i)
    {
        for(int j = i+1; j < numbers.size(); ++j)
        {
            // 반복자는 이렇게 vector<int> 뒤에 ::iterator를 붙여야 한다.
            // end()는 벡터의 가장 마지막 원소 다음 위치를 가리킨다.
            vector<int>::iterator it = find(answer.begin(), answer.end(), numbers[i]+numbers[j]);
            if(it == answer.end())
            {
                answer.push_back(numbers[i]+numbers[j]);
            }
        }
    }
    sort(answer.begin(), answer.end());
    
    return answer;
}