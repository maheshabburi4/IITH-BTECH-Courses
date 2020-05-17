#include<bits/stdc++.h>
using namespace std;
class Node{                                         //structure of Node in binary tree
    public:
    int data;
    Node *parent,*left,*right; 
};
Node* insert(Node* node, int key) {                 //inserting a node into Binary tree
    if (node == NULL){
        Node *temp =  new Node();
        temp->parent=NULL; 
        temp->data = key; 
        temp->left = temp->right = NULL; 
        return temp;
    }  
    if (key < node->data) {
        Node *lchild = insert(node->left, key); 
        node->left  = lchild;  
        lchild->parent = node; 
    }
    else{
        Node *rchild = insert(node->right, key); 
        node->right  = rchild; 
        rchild->parent = node; 
    }
    return node; 
}
Node* search(Node* node,int key){                   //Searching a node in Binary tree
    if(node==NULL)  return NULL;
    if(node->data==key)
        return node;
    else if(node->data>key)
        search(node->left,key);
    else
        search(node->right,key);
}   
Node* pred(Node* node,int key){                    //Finding Predecessor of key in Binary tree
    node=search(node,key);
    if (node == NULL)  return NULL ; 
    if (node->left != NULL) { 
        Node* tmp = node->left; 
        while (tmp->right) 
            tmp = tmp->right; 
        return tmp ; 
    }
    else{
        while(node->parent!=NULL && node->parent->right!=node)
            node=node->parent;
        return node->parent;
    }
} 
Node* succ(Node* node,int key){                     //Finding successor of key in Binary tree
    node=search(node,key);
    if (node == NULL)  return NULL ; 
    if (node->right != NULL) { 
        Node* tmp = node->right; 
        while (tmp->left) 
            tmp = tmp->left; 
        return tmp ; 
    }
    else{
        while(node->parent!=NULL && node->parent->left!=node)
            node=node->parent;
        return node->parent;
    }
}
Node* min_val(Node* node,int key){                  //Finding minimum value in the subtree with key as node
    node=search(node,key);
    if (node == NULL)  return NULL ; 
    while(node->left!=NULL)
        node=node->left;
    return node;    
}
Node* max_val(Node* node,int key){                  //Finding maximum value in the subtree with key as node
    node=search(node,key);
    if (node == NULL)  return NULL ; 
    while(node->right!=NULL)
        node=node->right;
    return node;
}
Node* com_anc(Node* node,int key1,int key2){        //Finding first common ancesstor for key 1 and key 2
    Node* node1=search(node,key1);
    Node* node2=search(node,key2);
    Node* temp=NULL;
    while(node1!=NULL){
        temp=node2;
        while(temp!=NULL){
            if(temp==node1)
                return node1;
            temp=temp->parent;
        }
        node1=node1->parent;
    }
}
int main(void){                                     //main function                   
    int i;
    char c;
    Node* root=NULL;
    scanf("%d%c",&i,&c);
    root=insert(root,i);
    while(c!='\n'){
        scanf("%d%c",&i,&c);
        insert(root,i);
    }
    Node* temp=NULL;
    int d,e;
    while(1){
        cin>>c;
        switch (c){
            case 'P':
                cin>>d;
                temp=pred(root,d);
                if(temp!=NULL)
                    cout<<temp->data<<endl;
                else
                    cout<<"NULL"<<endl;
                break;
            case 'S':
                cin>>d;
                temp=succ(root,d);
                if(temp!=NULL)
                    cout<<temp->data<<endl;
                else
                    cout<<"NULL"<<endl;
                break;
            case 'M':
                cin>>d;
                temp=min_val(root,d);
                if(temp==NULL)
                    cout<<"No element found";
                else
                    cout<<temp->data<<" "<<(max_val(root,d))->data<<endl;
                break;
            case 'C':
                cin>>d>>e;
                cout<<(com_anc(root,d,e))->data<<endl;
                break;
            case 'Q':
                return 0;
                break;
            default:
                cout<<"Error!:enter valid character";
                break;
        }
    }
}