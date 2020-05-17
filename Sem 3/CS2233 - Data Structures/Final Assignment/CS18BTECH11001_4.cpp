#include<bits/stdc++.h>
using namespace std;
class Node{                                             //structure for node in graph
    public:
    int vertex,weight;
    Node* neighbour;
};
void addEdge(Node *adj,int v1,int v2,int wt,int a){     //adding Edge to graph
    Node* temp=NULL;
    Node* temp1=new Node();
    temp1->vertex=v2;
    temp1->weight=wt;
    temp=&adj[v1];
    while(temp->neighbour!=NULL)
        temp=temp->neighbour;
    temp->neighbour=temp1;
    if(a==0){
        Node* temp2=new Node();
        temp2->vertex=v1;
        temp2->weight=wt;
        temp=&adj[v2];
        while(temp->neighbour!=NULL)
            temp=temp->neighbour;
        temp->neighbour=temp2;
    }
}
void DFS(Node *adj,int v, bool visited[]) {             //Depth first Search for reachable edges from v
    visited[v] = true; 
    Node* temp=&adj[v];
    temp=temp->neighbour;  
    while(temp!=NULL){
        if(!visited[temp->vertex]) 
            DFS(adj,temp->vertex, visited);
        temp=temp->neighbour;
    } 
}
void connectedComponents(Node *adj,int V) {            //connected components for the whole graph
    int count =0; 
    bool *visited = new bool[V];
    bool temp[V]; 
    for(int v = 0; v < V; v++) 
        visited[v] = false; 
    for (int v=0; v<V; v++) { 
        if (visited[v] == false) { 
            count++;
            for(int i=0;i<V;i++)
                temp[i]=visited[i];
            DFS(adj,v, visited);
            for(int i=0;i<V;i++){
                if(visited[i]!=temp[i])
                    cout<<i<<" ";
            } 
            cout << "\n"; 
        } 
    }
    cout<<count <<" components"<<endl; 
}
int minDistance(int V,int dist[], bool sptSet[]) {  //min of distances in the graph
    int min = INT_MAX, min_index; 
  
    for (int v = 0; v < V; v++) {
        if (sptSet[v] == false && dist[v] <= min) {
            min = dist[v]; min_index = v; 
        }
    }
    return min_index; 
} 
void dijkstra (int V,int *graph,int src,int reachable[]) //dijstras for finding min distances from src
{ 
    int dist[V]; 
    bool sptSet[V]; 
    for (int i = 0; i < V; i++) 
        dist[i] = INT_MAX, sptSet[i] = false; 
    dist[src] = 0;  
    for (int count = 0; count < V - 1; count++) { 
        int u = minDistance(V,dist, sptSet);  
        sptSet[u] = true; 
        for (int v = 0; v < V; v++) 
            if (!sptSet[v] && *((graph+u*V) + v) && dist[u] != INT_MAX && dist[u] + *((graph+u*V) + v) < dist[v]) 
                dist[v] = dist[u] + *((graph+u*V) + v); 
    } 
    for (int i = 0; i < V; i++){ 
            printf("%d %d %d\n",reachable[src], reachable[i], dist[i]);
    }  
}   
void sht_dist(int V,int src,Node* dir,int* graph){      //for considering connected part having source of whole graph 
    bool *visited = new bool[V];
    int count=0;
   for(int v = 0; v < V; v++) 
        visited[v] = false;
    DFS(dir,src, visited);
    for(int i=0;i<V;i++){
        if(visited[i]==true){
            count++;
        }
    }
    int reachable[count];
    count =0;   
    for(int i=0;i<V;i++){
        if(visited[i]==true){
            reachable[count++]=i;
            if(src==i)
                src=count-1;
        }
    }
    int part_graph[count][count]={{0}};
    for(int i=0;i<count;i++){
        for(int j=0;j<count;j++){
            part_graph[i][j]=*((graph+reachable[i]*V) + reachable[j]);
        }
    }
    dijkstra(count,(int *)part_graph,src,reachable);
}
int main(void){                                         //main function
    int V;
    cin>>V;
    Node adj[V];
    Node dir[V];
    for(int i=0;i<V;i++){
        adj[i].vertex=i;
        adj[i].weight=0;
        adj[i].neighbour=NULL;
        dir[i].vertex=i;
        dir[i].neighbour=NULL;
        dir[i].weight=0;
    }
    char ch;
    int i,j,wt,graph[V][V];
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++)
            graph[i][j]=0;
    }
    string str;
    while(1){
        cin>>str;
        if(str=="E"){
            cin>>i>>j>>wt;
            if(i<V && j<V){
            addEdge(adj,i,j,wt,0);
            addEdge(dir,i,j,wt,1);
            graph[i][j]=wt;
            }
            else 
                cout<<"Enter Valid Vertices"<<endl;
        }
        else if(str=="Find")                                //find operation
            connectedComponents(adj,V);
        else if(str=="SP"){                                 //SP operation
            cin>>i;
            if(i<V)
                sht_dist(V,i,dir,(int *)graph);
            else    
                cout<<"Vertex doesn't Exists"<<endl;
        }
        else if(str=="Quit")                                //to exit the program
            return 0;
        else
            cout<<"Enter valid Operation"<<endl;
    }
}