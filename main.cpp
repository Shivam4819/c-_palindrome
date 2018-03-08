#include<iostream>
#include<stack>
using namespace std;
stack<int> s;
class Palindrome
{
    private:
       struct node{
           int data;
            struct node *next;
           }*start,*temp, *newnode, *temp1;
       int num1,num2,n,i,x,count;
       node *a[4];
    public:
       Palindrome();
       int accept();
       void display();
       void find();
       
};

Palindrome::Palindrome(){
    start=NULL;
}

int Palindrome::accept(){
cout<<"enter the no of nodes"<<endl;
cin>>n;
for(i=0;i<n;i++){
 cout<<"enter the data"<<endl;
 cin>>x;
    if(start==NULL){
       start=new node;
       start->data=x;
       start->next=NULL;
       
       
     }
     else{
       temp=start;
       while(temp->next!=NULL)
       {
       temp=temp->next;
       }
       newnode=new node;
       newnode->data=x;
       newnode->next=NULL;      
       temp->next=newnode;
       
       }       
     }
     return 0;
}
void Palindrome::display()
{
temp=start;
cout<<"the element are->";
while(temp!=NULL){
    s.push(temp->data);
       cout<<temp->data<<" ";
       temp=temp->next;
       }
       cout<<endl; 
}
void Palindrome::find(){
    int flag;
    temp=start;
    while(temp!=NULL){
        x=s.top();
        s.pop();
        if(temp->data==x)
            flag=1;
        else
            flag=0;
        temp=temp->next;
    }
    if(flag==1)
        cout<<"palindrome"<<endl;
    else
        cout<<"not a palindrome"<<endl;
}

int main(){
    Palindrome p;
    p.accept();
    p.display();
    p.find();
}