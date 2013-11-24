#include<iostream>
using namespace std;
int multiply(int x,int y){
     if(y==0)
         x=1;
     else if(y>0){
       for(int i=0;i<y;i++)
           x*=x;
            }
     else{
     x=1/x;
     for(int j=0;j<-y;j++)
        x/=x;
     }
}
int main()
{
          int x,y;
          cin>>x>>y;
          cout<<multiply(x,y)<<endl;
}
