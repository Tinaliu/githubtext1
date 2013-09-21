#include<iostream>
using namespace std;
unsigned int ff(unsigned n){
     if(n==1)return 1;
     return n*ff(n-1);
}
int main()
{
          unsigned int m,n,sum;
          cin>>m>>n;
          unsigned int s,t,r;
          s=ff(m);
          t=ff(n);
          r=ff(m-n);
          sum=s/(r*t);
          cout<<"sum="<<sum<<endl;

}
