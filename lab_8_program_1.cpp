#include <iostream>
using namespace std;
struct book{
    int book_id;
    string book_title;
    string author;
    int price;
    void input(){
        cout<<"Enter id, title, author, price in order"<<endl;
        cin>>book_id>>book_title>>author>>price;
    }
    void display(){
        cout<<"id: "<<book_id<<endl<<"title: "<<book_title<<endl<<"author: "<<author<<endl<<"price: "<<price;
    }
};
int main(){
    book a;
    a.input();
    a.display();
    return 0;
    
}