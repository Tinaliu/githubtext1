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
   cout<<"¼��"<<i<<":"<<endl;
   cout<<"¼��ѧ��������";
   cin>>name;
   cout<<"¼��ѧ�ţ�";
   cin>>number;
   cout<<"¼��ѧ���Ա�";
   cin>>sex;
  }
  void student::add(student p){
   cout<<"������ѧ��"<<endl;
   p.set(N-4);
  }
  void student::expurgate(){
    name="0"��
    number=0;
    sex="\0";
    cout<<"ɾ����Ϣ�ɹ���"<<endl;
  }
  void student::show(){
    cout<<"���ѧ����Ϣ*******"<<endl;
    cout<<setiosflags(ios_base::left)
    <<setw(16)<<"����"<<setw(16)<<name<<endl
    <<setw(16)<<"ѧ��"<<setw(16)<<number<<endl
    <setw(16)<<"�Ա�"<<setw(16)<<sex<<endl
    <<resetiosflage(ios_base::left);
    cout<<"*******�������"<<endl;
  }
  class exam:public student{
   public:
   void score(int number){
     cout<<"¼��ɼ�"<<endl
     cin>>score;
     cout<<"����¼�밴1���˳����򰴳�1�������"<<endl;
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
