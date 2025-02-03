#include <string>
#include <vector>

using namespace std;

// 1. 같은 글자인지 아닌지 if문 사용
// 2. 같은 글자의 거리를 계산하려면 index와 for문 1개 더 필요
vector<int> solution(string s) {
    vector<int> answer;
    int AlphabetDistance = 0;
    
    for(int i = 0; i < s.size(); ++i)
    {
        AlphabetDistance = -1;
        for(int j = i-1; j >= 0; --j)
        {
            if(s[i]==s[j])
            {
                AlphabetDistance = i - j;
                break;
            }
        }
        answer.push_back(AlphabetDistance);
    }
    return answer;
}