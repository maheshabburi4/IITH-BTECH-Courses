#include <stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int T,E;
FILE *fp;
void getIntegerVal(int s[]){
  long val=0;
  for(int i=1;i<T;i++)
    val=val+s[i]*pow(2,T-i);
  if(s[0]==1)
    val=val*-1;
  fprintf(fp,"%ld\t",val);
}
void getFixedPointVal(int s[]){
  double val=0;
  for(int i=1;i<T;i++)
    val=val+s[i]*pow(2,E-i);
  if(s[0]==1)
    val=val*-1;
  fprintf(fp, "%5.12g\t",val);
}
void getFP(int s[]){
  double val=0,exp=0,man=0;
  for(int i=1;i<=E;i++)
    exp=exp+s[i]*pow(2, E-i);
  for(int i=E+1;i<T;i++)
    man=man+s[i]*pow(2,E-i);
  if(exp==(pow(2,E)-1)&&man!=0)
    fprintf(fp,"NAN\n");
  else if(exp==(pow(2,E)-1)&&man==0){
    if(s[0]==1)
    fprintf(fp,"-infinity\n");
    else
    fprintf(fp, "+infinity\n");
  }
  else if(exp==0&&man==0)
      fprintf(fp,"0\n");
  else{
    if(exp==0&&man!=0){
      fprintf(fp,"Denormal Number ");
      val=(0+man)*pow(2, exp+2-pow(2,E-1));
    }
    else
      val=(0+man)*pow(2, exp+1-pow(2,E-1));
    if(s[0]==1)
      val=val*-1;
    fprintf(fp,"%5.12g\n",val);
  }
}
int main(int argc,char **argv) {
  sscanf(argv[1],"%d",&T);
  sscanf(argv[2],"%d",&E);
  char a[10],b[T],name[100];
  int c[T];
  strcpy(a,argv[3]);
  if(strcmp(a,"Single")==0){
    strcpy(b,argv[4]);
    sprintf(name,"CS18BTECH11001_%d_%d_Single_%s.txt",T,E,b);
    for(int i=0;i<T;i++){
      if(b[i]=='0')
        c[i]=0;
      else
        c[i]=1;
    }
    fp=fopen(name,"w+");
    fprintf(fp,"Combination\t\tInteger\t\t\t\tFixed Point\t\t\t\tFloating Point\n");
    fprintf(fp,"%s\t",b);
    getIntegerVal(c);
    getFixedPointVal(c);
    getFP(c);
    fclose(fp);
  }
  else{
    sprintf(name,"CS18BTECH11001_%d_%d_All.txt",T,E);
    fp=fopen(name,"w+");
    fprintf(fp,"Combination\t\tInteger\t\t\t\tFixed Point\t\t\t\tFloating Point\n");
    for(int i=0;i<pow(2,T-1);i++){
      int k=i;
      for(int j=T-1;j>0;j--){
        c[j]=k%2;
        if(c[j]==1)
          b[j]='1';
        else
          b[j]='0';
        k=k/2;
      }
      b[0]='0';
      c[0]=0;
      fprintf(fp,"%s\t",b);
      fprintf(fp, "%d\t",i);
      getFixedPointVal(c);
      getFP(c);
    }
    for(int i=0;i<pow(2,T-1);i++){
      int k=i;
      for(int j=T-1;j>0;j--){
        c[j]=k%2;
        if(c[j]==1)
          b[j]='1';
        else
          b[j]='0';
        k=k/2;
      }
      b[0]='1';
      c[0]=1;
      fprintf(fp,"%s\t",b);
      fprintf(fp, "%d\t",i);
      getFixedPointVal(c);
      getFP(c);
    }
    fclose(fp);
  }
  return 0;
}