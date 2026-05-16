#include <iostream> 
#include <cstdlib>   // 用于 rand() 和 srand()
#include <ctime>     // 用于获取系统时间
using namespace std;  


int main(){
    int nums,guess,answer;
    cout <<"输入一1-100的整数，猜一猜吧，有10次机会：" <<endl;
    srand((unsigned)time(NULL)); 
    answer = rand()%100+1;
    for (nums=0;nums<10;nums++)
    {
        cin >> guess;
        if (guess < answer){
            cout <<"猜小了！" <<endl;
        } 
        else if (guess > answer){
            cout <<"猜大了！" << endl;
        }
        else{
            cout << "猜对了！答案是："<< answer << endl;
            break;
        }
        if(nums==9){
            cout << "很遗憾，机会用完了，答案是："<< answer << endl;
        }
    }
}