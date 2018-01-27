#include <iostream>
using namespace std;
class A{
public:
    void getXY(){
        cout<<"enter two numbers of xy:";
        cin>>x>>y;
    }
    void putXY(){
        cout<<"x="<<x<<"y="<<y<<endl;
    }
protected:
    int x,y;
};
class B:public A{
public:
    int get_S(){
        return s;
    }
    void make_S(){
        s=x*y;
    }
protected:
    int s;
};
class C:public B{
public:
    void get_H(){
        cout<<"enter a number of h:";
        cin>>h;
    }
    int get_V(){
        return v; 
    }
    void make_V(){
        make_S();
        v=get_S()*h;
    }
protected:
    int h,v;
};


int main(){
    A objA;
    B objB;
    C objC;
    cout<<"it's objectA\n";
    objA.getXY();
    objA.putXY();
    cout<<"it's objectB\n";
    objB.getXY();
    objB.make_S();
    cout<<"S="<<objB.get_S()<<"\n";
    cout<<"it's objectC\n";
    objC.getXY();
    objC.get_H();
    objC.make_V();
    cout<<"V="<<objC.get_V()<<"\n";
    return 0;
}

