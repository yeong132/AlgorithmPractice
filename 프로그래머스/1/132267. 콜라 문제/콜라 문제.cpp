#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int returnCoke = n / a * b;
    int emptyBottle = n - (n % a);
    int currentBottle = n - emptyBottle + returnCoke;
    
    answer += returnCoke;
    // a = 교환할 빈 병, b = 빈병과 교환받은 콜라, n = 현재 빈 병 개수
    while(currentBottle / a != 0)
    {
        returnCoke = currentBottle / a * b;
        emptyBottle = currentBottle - (currentBottle % a);
        currentBottle = currentBottle - emptyBottle + returnCoke;
        answer += returnCoke;
    }
    
    return answer;
}