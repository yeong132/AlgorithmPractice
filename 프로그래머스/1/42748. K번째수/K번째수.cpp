#include <string>
#include <vector>
#include <algorithm> // 정렬 sort함수

using namespace std;

bool compare(int a, int b){
    return a < b;
}
// 1. 정렬 필요
// 2. array를 자른 새로운 배열 필요
vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    // command 하나당 나오는 결과값이 저장되어야 하니 축약 for문 씀
    for(vector<int> command : commands){
        vector<int> sortedArray;
        
        // command의 1,2번째 숫자를 index로 쓰기 위해 -1을 해줌. index는 0부터 시작.
        int sortedArrayIndex = command[2]-1;
        
        // i번째 숫자부터 j번째 숫자까지 array 원소를 다시 새로운 배열에 넣음
        for(int i = command[0]-1; i < command[1]; ++i){
            sortedArray.push_back(array[i]);
        }
        
        // 오름차순 정렬
        sort(sortedArray.begin(), sortedArray.end(), compare);
        
        // 문제가 원하는 답을 answer 배열에다 푸쉬
        answer.push_back(sortedArray[sortedArrayIndex]);
    }
    return answer;
}