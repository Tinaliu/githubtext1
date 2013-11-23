class Array{
 public:
    Array(int cap);
    void set(int index, int value);
    int get(int index,bool error);
    private:
    int*data;
    int max;
}
Array.cpp
Array::Array(int cap):max(cap){
   data=new Int[cap];
}
void Array::set(int index,int value){
 if(index>=cap||index<0)
 cout<<"Array下标越界"<<endl;
 else
 data[index]=value;
}
int Array::get(int index,bool &error){
if(index<0)
error=true;
else
error=false;
return data[index];
}

