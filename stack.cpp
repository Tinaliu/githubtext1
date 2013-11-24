class stack{
  public:
  void push(int item);
  int pop();
  bool isEmpty();
};
void stack::push(int item){
   Node*node=new Node(ittem);
   node->next=head->next;
   head->next=node;
}
class Node{
 public:
 Node(int):data(d){}
 private:
 int data;
 Node*next;
};
class stack::pop{
Node*p=head->next;
head->next=head->next->next;
delete p;
}
