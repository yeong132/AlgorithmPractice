#include <vector>
#include <iostream>
using namespace std;

bool bIsPrimeNum(int num)
{
    if (num == 1) return false;
    
    for(int i = 2; i < num; ++i)
    {
        if(num%i == 0) return false;
    }
    
    return true;
}

// 소수는 1과 자기 자신으로만 나누어지는 수.
int solution(vector<int> nums) {
    int answer = 0;

    for(int i = 0; i <= nums.size()-3; ++i)
    {
        for(int j = i+1; j <= nums.size()-2; ++j)
        {
            for(int k = j+1; k <= nums.size()-1; ++k)
            {
                int primeNum = nums[i]+nums[j]+nums[k];

                if(bIsPrimeNum(primeNum))
                {
                    answer++;
                }
            }
        }
    }

    return answer;
}