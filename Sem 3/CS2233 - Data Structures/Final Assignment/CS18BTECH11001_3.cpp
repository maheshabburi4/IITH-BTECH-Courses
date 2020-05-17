#include<bits/stdc++.h>
using namespace std;
class Node{                                                         //structure for node in graph
    public:
    int vertex,weight;
    Node* neighbour;
};
void addEdge(Node *adj,int V,int v1,int v2,int wt){                 //adding Edge to graph
    if(v1<V && v2<V){
        Node* temp=NULL;
        Node* temp1=new Node();
        temp1->vertex=v2;
        temp1->weight=wt;
        temp=&adj[v1];
        while(temp->neighbour!=NULL)
            temp=temp->neighbour;
        temp->neighbour=temp1;
        Node* temp2=new Node();
        temp2->vertex=v1;
        temp2->weight=wt;
        temp=&adj[v2];
        while(temp->neighbour!=NULL)
            temp=temp->neighbour;
        temp->neighbour=temp2;
    }
    else
        cout<<"Enter valid vertex"<<endl;
}
void neighbours(Node* graph,int V,int i){                           //Printing neibours of vertex i
    if(i<V){
        Node* temp=&graph[i];
        for(temp=temp->neighbour;temp!=NULL;temp=temp->neighbour)
            cout<<temp->vertex<<" ";
        cout<<endl;
    }
    else
        cout<<"Enter valid vertex"<<endl;
}
void vertices(int V){                                               //Printing Vertices in the Graph
    for(int i=0;i<V;i++)
        cout<<i<<" ";
    cout<<endl;
}
void edgeWeight(Node* graph,int V,int v1,int v2){                   //Printing Edge Weight of (v1,v2) in the graph
    if(v1<V && v2<V){
        Node* temp=&graph[v1];
        for(temp=temp->neighbour;temp!=NULL;temp=temp->neighbour){
            if(temp->vertex==v2){
                cout<<temp->weight<<endl;
                break;
            }
        }
        if(temp==NULL)
            cout<<"Edge Doesn't Exist"<<endl;
    }
    else
        cout<<"Enter valid vertex"<<endl;
}
void containsVertex(int V,int i){                                   //Checking whether the vertex i present in the graph or not
    if(i<V)
        cout<<"The vertex "<<i<<" Exists"<<endl;
    else
        cout<<"The vertex "<<i<<" Doesn't Exists"<<endl;
}
void containsEdge(Node* graph,int V,int v1,int v2){                 //Checking whether edge (v1,v2) is present in the graph or not
    if(v1<V && v2<V){
        Node* temp=&graph[v1];
        for(temp=temp->neighbour;temp!=NULL;temp=temp->neighbour){
            if(temp->vertex==v2){
                cout<<"The Edge Exist"<<endl;
                break;
            }
        }
        if(temp==NULL)
            cout<<"Edge Doesn't Exist"<<endl;
    }
    else
        cout<<"Enter valid vertex"<<endl;
}
int main(void){                                                     //main function
    int V;
    cin>>V;
    Node graph[V];
    for(int i=0;i<V;i++){
        graph[i].vertex=i;
        graph[i].weight=0;
        graph[i].neighbour=NULL;
    }
    char ch;
    int i,j,wt;
    while(1){
        cin>>ch;
        switch(ch){
            case 'E':                                               //Edge adding
                cin>>i>>j>>wt;
                addEdge(graph,V,i,j,wt);
                break;
            case 'a':                                               //for neighbours
                cin>>i;
                neighbours(graph,V,i);
                break;
            case 'b':                                               //for vertices
                vertices(V);
                break;
            case 'c':                                               //for Edge Weight
                cin>>i>>j;
                edgeWeight(graph,V,i,j);
                break;
            case 'd':                                               //for containing vertex
                cin>>i;
                containsVertex(V,i);
                break;
            case 'e':                                               //for containing Edge
                cin>>i>>j;
                containsEdge(graph,V,i,j);
                break;
            case 'Q':
                return 0;
                break;
        }
    }
}