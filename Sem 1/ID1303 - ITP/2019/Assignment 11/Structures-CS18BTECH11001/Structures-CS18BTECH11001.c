#include<stdio.h>
struct engine{//declaring structure with name engine
    char serial[3];//for storing the serial value 
    int dd,mm,yyyy;//for the date,month,year
    char material[5];//for the material 
    int weight;//for the weight
};
void wt_5(struct engine *part,int N){//function for calculating weight greater than 5
    printf("\nSerial numbers where weight is more than 5kg : ");
    int flag=0;
    for(int i=0;i<N;i++){//for iterating each instance of engine
        if(part->weight>5){//checking if the coressponding instance weight is greater than 5 or not
            if(flag==1)//if it is not the first element for representing seperation between two elements
                printf(",");
            printf("%s",part->serial);//printing the serial of greater than 5
            flag=1;//changing the flag value representing atleast one value is present
        }
        part++;//incrementing pointer which points to next instance
    }
    if(flag==0)//if there are no instance of weight greater than 5
        printf("No Entries Found");
    printf("\n");
}
void year_btwn(struct engine *part,int N){//function for printing year having serial number between AA2 & BB7
    printf("\nYear of manufacture of engine parts having serial number between AA2 and BB7 : ");
    int k,flag=0;
    char c;
    for(int i=0;i<N;i++){//for iterating each instance of engine
        k=part->serial[2]-'0';//storing the integer value of character of last character of serial 
        c=part->serial[0];//storing character of 1st character of serial
        if((c=='A'&&k>1)||(c=='B'&&k<8)){//checkin if the serial is between AA2 & BB7
            if(flag==1)//if it is not the first element for representing seperation between two elements
                printf(",");
            printf("%d",part->yyyy);//printing the year of the instance having serial between AA2 & BB7
            flag=1;//changing the flag value representing atleast one value is present
        }
        part++;//incrementing pointer which points to next instance
    }
    if(flag==0)//if there are no instance of serial between AA2 & BB7
        printf("No Entries Found");
    printf("\n");
}
void details_3_years(struct engine *part,int N){//function for printing details of instances having manufactured date within 3 years of 15th Nov 2019
    printf("\nDetails of engine parts where year of manufacture is within 3 years of 15th Nov 2019 : \n");
    int diff=0,flag=0;
    for(int i=0;i<N;i++){//for iterating each instance of engine
        diff = (15-(part->dd))+(11-(part->mm))*30+(2019-(part->yyyy))*30*12;//calculating the differance between the coressponding date and 15th Nov 2019
        if(diff<=1080&&diff>=-1080){//if the diff is within 3 years
            flag=1;//changing the flag value representing atleast one value is present
            printf("\nSerial Number : %s \n",part->serial);
            printf("Date of Manufacture : %d%d-%d%d-%d \n",(part->dd)/10,(part->dd)%10,(part->mm)/10,(part->mm)%10,part->yyyy);//printing in the same format of entered date
            printf("Material : %s \n",part->material);
            printf("Weight : %d \n",part->weight);
        }
        part++;//incrementing pointer which points to next instance
    }
    if(flag==0)//if there are no instance of having manufactured date within 3 years of 15th Nov 2019
        printf("No Entries Found\n");
}
int main(void){
    int N,flag=0;
    printf("Enter the number of parts : ");
    scanf("%d",&N);//taking input of number of parts
    struct engine parts[N],*part_ptr=NULL;//declaring structure array,structure pointer
    for(int i=0;i<N;i++){
        part_ptr=&parts[i];//initiating pointer to the address of coressponding array element which may not be necessary
        printf("\nEnter Serial Number of part %d : ",i+1);
        scanf("%s",part_ptr->serial);//taking input of serial value
        printf("Enter date of manufacture of part %d : ",i+1);
        scanf("%d-%d-%d",&part_ptr->dd,&part_ptr->mm,&part_ptr->yyyy);//taking date as input
        printf("Enter Material of Part %d : ",i+1);
        scanf("%s",part_ptr->material);//taking material input
        do{
            if(flag==1)//if flag == then it is looped atleast one time then I print Error
                printf("Error Weight Has to between 1 and 10.Please Enter Weight Again:\n");
            printf("Enter Weight of part %d : ",i+1);
            scanf("%d",&part_ptr->weight);//taking input of weight
            flag=1;//channging the value of flag indicating the loop has run atleat one time
        }while(part_ptr->weight>10||part_ptr->weight<1);//checking the condition of weight is between 1 & 10
    }
    wt_5(parts,N);//calling the weight greater than 5(wt_5) function
    year_btwn(parts,N);//calling the year between function(year_btw)
    details_3_years(parts,N);//calling the detail within 3 years function(details_3_years)
}