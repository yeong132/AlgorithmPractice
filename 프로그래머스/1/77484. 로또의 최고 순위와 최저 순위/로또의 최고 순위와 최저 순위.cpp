#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int equalNum = 0;
    int zeroCount = 0;
    int minRank = 0;
    int maxRank = 0;
    
    for(int i = 0; i < 6; ++i)
    {
        if(lottos[i]==0) 
        {
            zeroCount++;
            continue;
        }
        
        for(int j = 0; j < 6; ++j)
        {
            if(lottos[i]==win_nums[j])
            {
                equalNum++;
                break;
            }
        }
    }
    
    if(equalNum == 0)
    {
        minRank = 6;
    }
    else
    {
        minRank = 6 - (equalNum - 1);
    }
    
    maxRank = 6 - (equalNum - 1 + zeroCount);
    if(maxRank == 7)
    {
        maxRank = 6;
    }

    answer.push_back(maxRank);
    answer.push_back(minRank);
   
    return answer;
}