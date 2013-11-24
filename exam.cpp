class student{
  public:
  void set(int i);
  void add(student p);
  void show();;
  void expurgate();
  private:
  string name;
  int number;
  string sex;
  }
  const N=7;
  void student::set(int i){
   cout<<"录入"<<i<<":"<<endl;
   cout<<"录入学生姓名：";
   cin>>name;
   cout<<"录入学号：";
   cin>>number;
   cout<<"录入学生性别：";
   cin>>sex;
  }
  void student::add(student p){
   cout<<"输入新学生"<<endl;
   p.set(N-4);
  }
  void student::expurgate(){
    name="0"；
    number=0;
    sex="\0";
    cout<<"删除信息成功！"<<endl;
  }
  void student::show(){
    cout<<"输出学生信息*******"<<endl;
    cout<<setiosflags(ios_base::left)
    <<setw(16)<<"姓名"<<setw(16)<<name<<endl
    <<setw(16)<<"学号"<<setw(16)<<number<<endl
    <setw(16)<<"性别"<<setw(16)<<sex<<endl
    <<resetiosflage(ios_base::left);
    cout<<"*******输出结束"<<endl;
  }
  class exam:public student{
   public:
   void score(int number){
     cout<<"录入成绩"<<endl
     cin>>score;
     cout<<"继续录入按1，退出程序按除1的任意键"<<endl;
     swich(tp){
      case 1:score(number);
             break;
       default:
     }
   }
   private:
   float score;
   string tp;
  }
