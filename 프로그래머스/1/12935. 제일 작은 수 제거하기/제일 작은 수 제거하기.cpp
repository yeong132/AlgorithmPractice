#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// bool compare(int a, int b) {
//     return a > b;
// }
// 1. arr 원소끼리 비교해서 제일 작은 수를 pop_back해주면 될거 같다.
// 2. 내림차순 정렬 후에 .end()를 활용해 배열에서 제거하면 될거 같다.
// 3. 가장 작은 값을 찾아 제거하는 방법이 떠올랐다.
vector<int> solution(vector<int> arr) {
    
    // -1을 arr에 넣는 예외처리
    if(1 == arr.size()) {
        return {-1};
    } 
    // else {
    //     sort(arr.begin(), arr.end(), compare);
    //     arr.pop_back();
    // }
    
    // 가장 작은 값을 찾는다
    auto min_it = min_element(arr.begin(), arr.end());
    
    arr.erase(min_it);
    
    return arr;
}