#include<bits/stdc++.h>
using namespace std;
class Edge{                                                             //Structure of an edge
    public:
    int src,des,weight;
    Edge* next;
};
class result{                                                           //structure used for containing edges in MST
    public:
    int x,y;
};
void FrontBackSplit(Edge* source, Edge** frontRef, Edge** backRef) {    //Funtion to be used in Merge sort function
    Edge *fast,*slow; 
    slow = source; 
    fast = source->next; 
    while (fast != NULL) { 
        fast = fast->next; 
        if (fast != NULL) { 
            slow = slow->next; 
            fast = fast->next; 
        } 
    } 
    *frontRef = source; 
    *backRef = slow->next; 
    slow->next = NULL; 
} 
Edge* SortedMerge(Edge* a, Edge* b) {                                  //Function to be used in mergesort function
    Edge* result = NULL; 
    if (a == NULL) 
        return (b); 
    else if (b == NULL) 
        return (a); 
    if (a->weight <= b->weight) { 
        result = a; 
        result->next = SortedMerge(a->next, b); 
    } 
    else { 
        result = b; 
        result->next = SortedMerge(a, b->next); 
    } 
    return (result); 
} 
void MergeSort(Edge** headRef) {                                        //Function for soeting structured Linked lists
    Edge *head = *headRef,*a,*b; 
    if ((head == NULL) || (head->next == NULL))  
        return;  
    FrontBackSplit(head, &a, &b); 
    MergeSort(&a); 
    MergeSort(&b); 
    *headRef = SortedMerge(a, b); 
} 
class Disjoint_Set{                                                     //Disjoint Set Data type
    public:
    int V,*rep,*rank;
    Disjoint_Set(int V){                                                //Constructor
        this->V=V;
        rep=new int[V];
        rank=new int[V];
    }
    void Makeset(int x){                                                //Make Set function
        rep[x]=x;
        rank[x]=0;
    }
    int Findset(int x){                                                 //FindSet function
        while(x!=rep[x]){
            rep[x]=rep[rep[x]];
            x=rep[x];
        }
        return x;
    }
    void Union(int x,int y){                                            //Union Function
        x=rep[x];
        y=rep[y];
        if(rank[x]>rank[y])
            rep[y]=x;
        else
            rep[x]=y;
        if(rank[x]==rank[y])
            rank[y]++;
    }
};
void kruskal(int V,Edge** edj,int edge_count){                          //kruskal Algorithm
    int count=0;
    result mst[V-1];
    Disjoint_Set DS(V);
    for(int i=0;i<V;i++)
        DS.Makeset(i);
    MergeSort(edj);
    Edge* temp=*edj;
    int u,v;
    while(temp!=NULL){
        u=temp->src;
        v=temp->des;
        if (DS.Findset(u) != DS.Findset(v)) {
            DS.Union(u, v);
            mst[count].x=u;
            mst[count].y=v;
            count++;
        }
        temp=temp->next;
    }
    if(count == V-1){
        for(int i=0;i<count;i++)
            cout<<"("<<mst[i].x<<","<<mst[i].y<<") ";
        cout<<endl;
    }
    else
        cout<<"Minimum Spanning Tree doesn't exist"<<endl;
}
void insertEdge(Edge** head_ref,int v1,int v2,int wt){                  //insertiing Edge into graph
    Edge* new_edge=new Edge();
    new_edge->src=v1;
    new_edge->des=v2;
    new_edge->weight=wt;
    new_edge->next=(*head_ref);
    (*head_ref)=new_edge;
}
int main(void){                                                         //main function
    int V;
    cin>>V;
    Edge* edj=NULL; 
    char ch;
    int i,j,wt,edge_count=0;
    string str;
    while(1){
        cin>>str;
        if(str=="E"){                                                   //for adding edge 
        cin>>i>>j>>wt;
            if(i<V && j<V){
                insertEdge(&edj,i,j,wt);
                edge_count++;
            }
            else
                cout<<"Enter valid Vertex"<<endl;
        }
        else if(str=="Kruskal")                                         //for performing kruskal
            kruskal(V,&edj,edge_count);
        else if(str=="Quit")                                            //for exiting the program
            return 0;
        else
            cout<<"Enter valid operation"<<endl;
    }
}