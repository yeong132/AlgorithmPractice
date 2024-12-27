#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double result = 0;
    
    for(int i = 0; i < arr.size(); i++) {
        result += arr[i];
    }
    answer = result / arr.size();
     
    return answer;
}