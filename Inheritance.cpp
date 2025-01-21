#include<iostream>
using namespace std;

class Animal{
public:
 void sleep(){
    cout<<"sleeping..."<< "\n";
 }
 void eat(){
    cout<<"eating..." <<"\n";
 }


};

class Cat : public Animal{
    public:

        void meow(){
            cout<<"meow..."<< endl;
        }
};

int main(){
    Cat mycat;
    mycat.sleep();
    mycat.eat();
    mycat.meow();
}