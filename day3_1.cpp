#include <iostream>
#include <string>
using namespace std;


struct books{
    string title;
    string writter;
    string price;
    int id;
};
void printbooks(struct books book){
    cout<<"书籍名称:" << book.title <<endl;
    cout<<"作者:" << book.writter <<endl;
    cout<<"价格:" << book.price <<endl;
    cout<<"编号:" << book.id <<endl;
}

int main(){
    books book1;
    book1.title ="小狗钱钱";
    book1.writter = "博多·舍费尔";
    book1.price = "39.00";
    book1.id = 001;

    printbooks(book1);
    return 0;
}
