#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 1. 전체 학생 수에서 도난당한 학생 수를 제외한 후 시작한다.
// 2. 여벌 체육복을 가져온 학생이 체육복을 도난당한 경우도 제외한다.
// 3. 남은 체육복을 가진 학생이 앞뒤 번호의 도난당한 학생에게 줄 수 있는 지 확인한다.
//  - 앞번호가 체육복이 없으면 먼저 빌려준다. 예시로, 2번인데 3번을 먼저 빌려주면 1번은 못받기때문..
// 4. 도난당했지만 체육복을 다시 받은 학생을 체육 수업에 참여할 수 있도록 처리한다.
// 5. 모든 학생을 확인한 후, 체육 수업에 참여할 수 있는 학생 수를 반환한다.
int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> realLost;
    
    for(int lostNum : lost)
    {
        // 도난당한 학생 중 여벌이 없는 경우
        if(find(reserve.begin(), reserve.end(), lostNum) == reserve.end())
        {
            realLost.push_back(lostNum);
        }
        // 도난당한 학생 중 여벌이 있는 경우
        else
        {
            reserve.erase(find(reserve.begin(), reserve.end(), lostNum));
        }
    }
    
    // 정렬이 안 되어있으면 서로 가까운거 끼리 매치가 안되기 때문에 추가
    sort(realLost.begin(), realLost.end());
    sort(reserve.begin(), reserve.end());
    int answer = n - realLost.size();
    
    for(int reserveNum : reserve)
    {
        for(vector<int>::iterator it = realLost.begin(); it != realLost.end(); ++it)
        {
            if(abs(reserveNum - *it) == 1)
            {
                answer++;
                realLost.erase(it);
                break;
            }  
        }
    }    
        
    return answer;
}