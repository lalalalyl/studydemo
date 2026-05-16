#include<iostream>  
#include <iomanip>  
using namespace std;


int main()  
{  
    float weight,height,bmi;
    cout <<"请输入你的身高（m）：";
    cin >> height;
    if(height<=0)
    {
        cout <<"输入有误，请重新输入:";
        cin >> height;
    }
    cout <<"请输入你的体重（kg）：";
    cin >> weight;
    if(weight<=0)
    {
        cout <<"输入有误，请重新输入:";
        cin >> weight;
    }
    bmi=weight/(height*height);
    cout << fixed << setprecision(2);
    if(bmi<18.5)
        cout <<"你的BMI指数为："<< bmi <<"，偏瘦";
    else if(bmi>=18.5 && bmi<24)
        cout <<"你的BMI指数为："<< bmi <<"，正常";
    else if(bmi>=24 && bmi<28)
        cout <<"你的BMI指数为："<< bmi <<"，偏胖";
    else
        cout <<"你的BMI指数为："<< bmi <<"，肥胖";

}