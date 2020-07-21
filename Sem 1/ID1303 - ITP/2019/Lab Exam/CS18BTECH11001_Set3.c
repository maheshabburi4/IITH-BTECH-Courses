#include<stdio.h>
#include<math.h>
struct point{                   //structure for coordinates of a point
    int x;
    int y;
};
float eucd_dist(int x1,int y1,int x2,int y2){//function for calculating distance
    float d=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));//euclidean distance formula
    return d;
}
int main(void){
    int N;
    do{
    printf("Enter the value of N : ");
    scanf("%d",&N);                 //taking the no.of points from user
    if(N<3||N>6)                    //checking whether given N is in range or not.if not print error
        printf("Error! please enter value of N between 2 to 6 \n");
    }while(N<3||N>6);//loop until the user enter valid value
    struct point set[N];//for the coordinates of N points 
    int a,b;            //for the maximum distance points
    float d,max=0;      //for the distance and maximum calculation
    int px,py;          //temporary variables
    for(int i=0;i<N;i++){
        do{
        printf("Enter the coordinates of the point %d : ",i+1);
        scanf("%d%d",&px,&py);      //taking coordinates from user 
        if(px<-32768||px>32767||py<-32768||py>32767)//if the coordinates are invalid I printed error
            printf("Error! please enter values in the range of -32768 to 32767\n");
        }while(px<-32768||px>32767||py<-32768||py>32767);//looping until the user enters valid coordinates
        set[i].x=px;                //assingning the valid coordinates to the set
        set[i].y=py;                
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            d=eucd_dist(set[i].x,set[i].y,set[j].x,set[j].y);//calculating diatance between i+1th point and j+1th point
            if(d>max){              //for calculating max
                max=d;
                a=i+1;              //repalcing the past points with the present points
                b=j+1;
            }
        }
    }
    printf("The points corresponding to Maximum distance : (%d,%d) \n",a,b);//printing output
    return 0;
}