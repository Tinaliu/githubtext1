class SafeArray{
 public:
 int &operator[](int index){
  if(index<0||index>max){
  this->error=true;
  return data[0];
   }
 else
   {
    this->error=false;
    return data[index];
   }
 }
}
