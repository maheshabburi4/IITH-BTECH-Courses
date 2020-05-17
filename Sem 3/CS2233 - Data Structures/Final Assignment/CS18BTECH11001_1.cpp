#include<bits/stdc++.h>
using namespace std;
class Node{                             //Structure of a Node in the linked list
    public:
    Node *prev,*next;
    char ch;
};
class alpha_map{                        //A Structure used instead of mapping during sort
    public:
    char ch;
    int a;
};
void insert(Node** head,Node** tail,char c){//inserting into linked list
      Node *temp=new Node();
      temp->ch=c;
      temp->next=NULL;
      if(*head==NULL){
        temp->prev=NULL;
        *head=temp;
        *tail=temp;
        temp=NULL;
      }
      else{	
        temp->prev=*tail;
        (*tail)->next=temp;
        *tail=temp;
      }
}
int int_val(char c){                        //For the case insensitivity
    int d;
    if(c>='A' && c<='Z')
        d=(int)c - 65;
    else if(c>='a' && c<='z')
        d=(int)c - 97;
    return d;
}
void delete_node(Node** head_ref,Node* del){//for deleting a node from linked list
    if (*head_ref == NULL || del == NULL)  
        return;  
    if (*head_ref == del)  
        *head_ref = del->next;  
    if (del->next != NULL)  
        del->next->prev = del->prev;  
    if (del->prev != NULL)  
        del->prev->next = del->next;  
    free(del);
}
void Store(Node** head,Node** tail){        //Store function
    cout<<(*head)->ch<<" "<<(*tail)->ch<<endl;
}
void Print(Node** head){                    //Print function
    int char_count[26]={0};
    Node* temp=*head;
    while(temp!=NULL){
        char_count[int_val(temp->ch)]++;
        temp=temp->next;
    }
    temp=*head;
    while(temp!=NULL){
        if(char_count[int_val(temp->ch)]!=-1){
            cout<<temp->ch<<" "<<char_count[int_val(temp->ch)]<<" ";
            char_count[int_val(temp->ch)]=-1;
        }
        temp=temp->next;
    }
    cout<<endl;
}
bool compare(alpha_map x,alpha_map y){      //A function for use in the sort function of STL library
    if(x.a>y.a)
        return 1;
    else
        return 0;
}
void Ascend(Node** head){                   //Ascend function
    alpha_map pack[26];
    for(int i=0;i<26;i++)
        pack[i].a=0;
    Node* temp=*head;
    while(temp!=NULL){
        (pack[int_val(temp->ch)].a)++;
        (pack[int_val(temp->ch)].ch)=temp->ch;
        temp=temp->next;
    }
    sort(pack,pack+26,compare);
    for(int i=0;i<26;i++){
        if(pack[i].a!=0)
            cout<<pack[i].ch;
        else
            break;
    }
    cout<<endl;
}
void Remove(Node** head,int T){             //Remove function
    Node *temp1=*head,*temp2;
    int count=0;
    while(temp1!=NULL){
        temp2=temp1;
        count=0;
        while(temp2!=NULL){
            if(temp1->ch!=temp2->ch)
                break;
            else{
                if(count>=T)
                    delete_node(head,temp2);
                count++;
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
    temp1=*head;
    while(temp1!=NULL){
        cout<<temp1->ch;
        temp1=temp1->next;
    }
    cout<<endl;
}
int main(void){                             //main function
    string str;
    cin>>str;
    Node* head=NULL,*tail=NULL;
    int length=0;
    while(str[length]!='\0'){
        insert(&head,&tail,str[length++]);
    }
    while(1){
        cin>>str;
        if(str=="Store")                    //For Store operation
            Store(&head,&tail);
        else if(str=="Print")               //For Print operation
            Print(&head);
        else if(str=="Ascend"||str=="Sort")//For Sort operation 
            Ascend(&head);          
        else if(str=="Remove"){             //For Remove operation
            int T;
            cin>>T;
            Remove(&head,T);
        }
        else if(str=="Quit")                //For exitting the program
            return 0;
        else
            cout<<"Enter Valid Operation"<<endl;
    }
}