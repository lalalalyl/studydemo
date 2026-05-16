#include <iostream>
using namespace std;

class student{
    private:
    string name;
    int age;
    public:
    student(string studentname,int studentage){
        name = studentname;
        age = studentage;
    }
    string getname (){
        cout <<"学生姓名："<< name << endl;
        return name;
    }
    int getage (){
        cout <<"学生年龄："<< age << endl;
        return age;
    }
    void setname(string studentname){
        name = studentname;
    }
    void setage(int studentage){
        if (studentage>0)
        {
            age = studentage;
        }
        else{
            cout <<"年龄必须大于0！" << endl;
        }
    }
};
int main(){
    student s1("张三", 20);
    s1.getname();
    s1.getage();
    s1.setname("李四");
    s1.setage(-2);
    s1.getname();
    s1.getage();
}