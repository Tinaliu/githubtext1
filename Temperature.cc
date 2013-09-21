#include<iostream>
using namespace std;
int Cchangetof(int x,int y)
{
       x=5/9*(y-32);
       return x;
}
int fchangetoC(int x,int y)
{
      y=32+x*9/5;
      return y;
}
int main()
{
          int C,f,t;
          cin>>t;
          if(t>=0){
            f=t;
            fchangetoC(f,C);
            cout<<"C="<<C<<endl;
          }
          else{
            C=t;
            Cchangetof(f,C);
            cout<<"f="<<f<<endl;
          }



}
