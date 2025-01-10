#include <string>
#include <vector>

using namespace std;

// 1. 2차원 배열의 index로 배열에 접근해 각 배열의 크기를 비교한다. 
// 2. 서로 같으면 그 배열들의 index를 for문에서 순회하게 해서 값을 더해준다.
// 3. 2차원 배열의 index인 배열에 그 값을 push_back 해준다.
// 4. 하고 나면 2차원 배열의 index값을 for문을 이용해 1 더해준다.
vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    vector<int> resultSum;
    int pushInpSum = 0;
    
    // 2차원 배열 관련 연산은 블로그를 찾아봤다.
    for(int j = 0; j < arr1.size(); ++j){
        resultSum.clear();
        for(int i = 0; i < arr1[j].size(); ++i){
            pushInpSum = arr1[j][i] + arr2[j][i];
            resultSum.push_back(pushInpSum);      
        }
        answer.push_back(resultSum);
    }
    
    return answer;
}