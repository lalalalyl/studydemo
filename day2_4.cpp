#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int *p=arr;  // 指针指向数组的首元素
    p[1]=19;
    for (int i=0;i<5;i++){
        cout << *(p+i) << endl;
        cout << p+i << endl;
    }
}