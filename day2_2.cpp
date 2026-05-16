#include <iostream>
#include <cstdlib>   // 用于 rand() 和 srand()
#include <ctime>     // 用于获取系统时间
using namespace std;

int main(){
    double score[2][20];
    double total_1=0, total_2=0,average_1=0,average_2=0;
    srand((unsigned)time(NULL));
    for (int i = 0;i < 2 ;i++){
        for (int j = 0;j < 20 ;j++){
            score[i][j] = rand()%401/10.0+60.0;   // 生成60.0到100.0之间的随机数
            cout << "第"<<i+1<<"科目"<<"第"<<j+1<<"个学生的分数是："<<score[i][j] <<endl;
            if (i == 0) {
                total_1 += score[0][j];
            } else {
                total_2 += score[1][j];
            }
        }
    }  
    average_1 = total_1/20;
    average_2 = total_2/20;
    cout << "第1科目的平均分是："<<average_1 <<endl;
    cout << "第2科目的平均分是："<<average_2 <<endl;

    return 0;
}