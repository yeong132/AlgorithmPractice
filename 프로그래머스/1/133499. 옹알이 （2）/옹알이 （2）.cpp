#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    int flag = 0;
    
    // 옹알이 배열에서 어떤 원소가 조카가 말할 수 있는 발음인지 알아야 한다.
    for(int i = 0; i < babbling.size(); ++i)
    {
        flag = 0;
        
        for(int j = 0; j < babbling[i].size(); ++j)
        {
            if(babbling[i].substr(j, 3) == "aya" && flag != 1)
            {
                flag = 1;
                j+=2;
            }
            else if(babbling[i].substr(j, 2) == "ye" && flag != 2)
            {
                flag = 2;
                j+=1;
            }
            else if(babbling[i].substr(j, 3) == "woo" && flag != 3)
            {
                flag = 3;
                j+=2;
            }
            else if(babbling[i].substr(j, 2) == "ma" && flag != 4)
            {
                flag = 4;
                j+=1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        
        if(flag != 0)
        {
            answer++;
        }
    }
    
    return answer;
}