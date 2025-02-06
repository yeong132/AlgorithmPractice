#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> topRank;
    
    for(int i = 0; i < score.size(); ++i)
    {
        if(i < k)
        {
            topRank.push_back(score[i]);
        }  
        else if(i >= k && topRank[k-1] < score[i])
        {
            topRank.pop_back();
            topRank.push_back(score[i]);
        }
        
        sort(topRank.begin(), topRank.end(), compare);
        answer.push_back(topRank.back());
    }
    
    return answer;
}