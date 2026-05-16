#include <iostream>
#include <ctime>
#include <cstdlib>   // 用于 rand() 和 srand()
using namespace std;

class hunter{
    private:
    int hp;
    int damage;
    int medicine;
    public:
    hunter(int hunterhp,int hunterdamage,int huntermedicine){
        hp = hunterhp;
        damage = hunterdamage;
        medicine = huntermedicine;
    }
    int gethp(){
        cout <<"玩家当前血量："<< hp << endl;
        return hp;
    }
    int getdamage(){
        cout <<"玩家当前物理攻击力："<< damage << endl;
        return damage;
    }
    int getmedicine(){
        cout <<"玩家当前药品数量："<< medicine << endl;
        return medicine;
    }
    int recover(){
        if (hp<50 & medicine>0){
            medicine -= 1;
            hp +=40;
        }
        cout <<"玩家当前药品数量："<< medicine << endl;
        return 0;
    }
    int hurt(int d){
        hp -=d;
        cout<<"来一口"<<endl;
        return 0;
    }
};

class monster{
    private:
    int hp;
    int damage;
    public:
    monster(int monsterhp,int monsterdamage){
        hp = monsterhp;
        damage = monsterdamage;
    }
    int gethp (){
        cout <<"怪物当前血量："<< hp << endl;
        return hp;
    }
    int getdamage (){
        cout <<"怪物当前伤害："<< damage << endl;
        return damage;
    }
        int hurt(int d){
        hp -=d;
        cout<<"砍一刀"<<endl;
        return 0;
    }
};

int main(){
    int rate;
    hunter lalalalyl(100,200,20);
    monster dragon(5000,30);
    lalalalyl.gethp();
    lalalalyl.getdamage();
    lalalalyl.getmedicine();
    dragon.gethp();
    cout << "=============================================================================================================" << endl;
    srand((unsigned)time(NULL)); 
    for (int i=0; i<999; i++){
        cout<<"回合数："<< i+1 << endl;
        if (lalalalyl.gethp()<=0){
            cout<<"力尽倒下"<<endl;
            break;
        }
        if(dragon.gethp()==0){
            cout<<"任务完成！"<<endl;
            break;
        }
        if(i=0){
        cout<<"战斗开始！"<<endl;
        }
        else{
        cout<<"继续战斗！"<<endl;
        }
        cout << "=============================================================================================================" << endl;
        rate = rand()%100;
        dragon.hurt(lalalalyl.getdamage());
        dragon.gethp();
        if (rate<76){
            lalalalyl.hurt(dragon.getdamage());
            lalalalyl.gethp();
        }
        else{
            lalalalyl.gethp();
            continue;
        }
        lalalalyl.recover();
    }
}
    
    
    

    