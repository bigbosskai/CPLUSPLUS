#include<iostream>
using namespace std;
class B
{ public:
    static void Add() { i++ ; }
    static int i;
    void out() { cout<<"static i="<<i<<endl; }
};
int B::i=0;
class D : private B
{ public:    
      void f()
    { i=5;
         Add();
         B::i++;
         B::Add();
       }
};
int main()
{ B x;  D y;
  x.Add();//i 1 
  x.out();//static i=1; 
  y.f();//i 5
  cout<<"static i="<<B::i<<endl;
  cout<<"static i="<<x.i<<endl;
  //cout<<"static i="<<y.i<<endl;
  return 0;
}

