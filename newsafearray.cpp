class SafeArray{
 public:
 int &operator[](int index){
  if(index<0||index>100){
  this->error=true;
  return data[0];
   }
 else
   {
    this->error=false;
    return data[index];
   }
 }
