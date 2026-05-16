#include <iostream>
#include <vector>
using namespace std;

class player{
    private:
        int hp;
        int mp;
        int attack;
        int defense;
    public:
        player(int playerhp,int playermp,int playerattack,int playerdefense){
            hp = playerhp;
            mp = playermp;
            attack = playerattack;
            defense = playerdefense;
        }
        int gethp(){
            if (hp<0){
                hp = 0;
            }
            cout <<"当前生命值："<< hp << endl;
            return hp;
        }
        int getmp(){
            cout <<"当前魔力值："<< mp << endl;
            return mp;
        }
        int getattack(){
            return attack;
        }
        int getdefense(){
            return defense;
        }
        int hurt(int damage){
            hp -= damage-defense;
            if (damage < defense){
                hp -= 0;
            }
            return hp;
        }
        int recover(int heal){
            hp += heal;
            return hp;
        }
        int attackup(int buff){
            attack += buff;
            return attack;
        }
        int defenseup(int buff){
            defense += buff;
            return defense;
        }
};
class monster{
        private:
        int hp;
        int attack;
        int defense;
        public:
        monster(int monsterhp,int monsterattack,int monsterdefense){
            hp = monsterhp;
            attack = monsterattack;
            defense = monsterdefense;
        }
        int gethp(){
            if (hp<0){
                hp = 0;
            }
            return hp;
        }

        int getattack(){
            return attack;
        }
        int getdefense(){
            return defense;
        }
        int hurt(int damage){
            hp -= damage-defense;
            return hp;
        } 
};
int main(){
    player p1(100,200,50,10);
    monster m1(100,10,0);
    monster m2(150,20,10);
    string action;
    for (int turns=0;turns<99;turns++){
        cout <<"======================="<<endl;
        cout <<"第"<< turns+1 <<"回合"<< endl;
        p1.gethp();
        cout <<"请选择你的操作：攻击：attack  恢复：recover  强化：buff  防御：defense  逃跑：escape"<< endl;
        cin >> action;
        if (action=="attack"){
            cout<<"请选择攻击目标(1/2)"<< endl;
            int target;
            cin >> target;
            if (target==1){
                m1.hurt(p1.getattack());
                if (m1.gethp()<=0){
                    m1.hurt(-m1.gethp());
                    p1.hurt(m2.getattack());
                }
                else{
                    p1.hurt(m1.getattack());
                    p1.hurt(m2.getattack());
                }
            }
            else if (target==2){
                m2.hurt(p1.getattack());
                if (m2.gethp()<=0){
                    m2.hurt(-m2.gethp());
                    p1.hurt(m1.getattack());
                }
                else{
                    p1.hurt(m1.getattack());
                    p1.hurt(m2.getattack());
                }
            }
        }
        else if (action=="recover"){
            p1.recover(25);
            p1.gethp();
        }
        else if (action=="buff"){
            p1.attackup(10);
            p1.defenseup(5);
            cout<<"本回合强化，攻击防御力提升"<<endl;
        }
        else if (action=="defense"){
            p1.defenseup(p1.getdefense()*2);
            cout<<"本回合防御 防御力三倍"<<endl;
        }
        else if (action=="eascape"){
            cout<<"你给路打油~"<<endl;
            break;
        }
        else{
            cout<<"输入无效 本回合跳过"<<endl;
        }
        if (p1.gethp()<=0){
            cout<<"力尽倒下"<<endl;
            break;
        }
        else if(m1.gethp()==0&&m2.gethp()==0){
            cout<<"战斗胜利"<<endl;
            break;
        }
        cout<<"怪物1当前生命值:" << m1.gethp() << endl;
        cout<<"怪物2当前生命值:" << m2.gethp() << endl;
    }
    return 0;        
}