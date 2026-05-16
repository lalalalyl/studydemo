#include <iostream>
using namespace std;

int max(int num1, int num2){
if (num1>num2)
return num1;
else 
return num2;
}
int jiecheng(int total){
    for (int i=total-1;i>0;i--){
    total=total*i;
}
return total;
}
int main(){
    int num1,num2;
    cout<<"请输入1个整数："<<endl;
    cin>>num1;
    cout<<"请输入另1个整数："<<endl;
    cin>>num2;
    int total=max(num1,num2);
    cout<<"较大的数是："<<total<<endl;
    int final_answer=jiecheng(total);
    cout<<"较大的数的阶乘是："<<final_answer<<endl;
}