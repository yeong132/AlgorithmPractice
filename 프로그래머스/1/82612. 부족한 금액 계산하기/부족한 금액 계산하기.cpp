using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long tPrice = 0;
    
    for(int i = 1; i <= count; ++i){
        tPrice += price * i;
    }
    
    if(0 >= tPrice - money)
        return 0;
    else {
        answer = tPrice - money;
        return answer;
    }   
}