 
#include <iostream>
#include<assert.h>
using namespace std;
 

const int N=3; //number of weights including bias weight
int input[N];
 int weight[N];
 
int LARGE_NUMBER =100;

void printWeights(){
    cout<<"Weights: [";
 for(int i=0; i<N; i++)
     cout<<weight[i]<<" ";
 cout<<"]";
}
void printInput(){
    cout<<"Input: [";
 for(int i=0; i<N; i++)
     cout<<input[i]<<" ";
 cout<<"]";
}

void initWeights() {
    for(int i=0; i<N; i++)
      weight[i]=1; 
}
bool isEven(int num) {
    return ((num%2)==0);
}
bool isOdd(int num) {
    return ((num%2)==1);
}
bool sameSign(int in, int out) {
 if((in>0) and (out>0)) return true;
 if((in<=0) and (out<=0)) return true;    
 return false;
}
int main()
{
 int numCorrect=0;
 input[0] =1; //input for bias weight
 initWeights();
 
 for(int i=0; i<LARGE_NUMBER; i++){     
 
 int someNumber = rand();
 
 //assert(N==4);
 
 // no need to set input[0]
 input[1] =  isEven(someNumber)?1:-1;
 input[2] = isOdd(someNumber)?1:-1;   
  
  
 int Y=0; 
 //Make prediction 
 for (int i = 0; i < N; i++) {
	 Y += input[i]* weight[i];	   
  }   
    
  int outcome = isEven(someNumber)?1:-1;
   
  
  string outcomeString = (outcome>0)?"taken": "not-taken";
  cout<<"Number "<<someNumber;
  printWeights();
  printInput();
  
  cout<<" Y "<<Y<<" ";
  string result;
  if(sameSign(Y,outcome))
  {
      result="Correct";numCorrect++;
  }
  else
    result="Wrong";
  
      
  
  if(Y>0)
    cout<<" Prediction: TAKEN. Outcome: "<<outcomeString<<" "<<result;
  else
    cout<<" Prediction: NOT-TAKEN. Outcome: "<<outcomeString<<" "<<result;  
 
  //Perform training
 
     
  for (int i = 0; i < N; i++) {
     if(sameSign(input[i], outcome))
	  weight[i] = weight[i]+1;
     else  
	  weight[i] = weight[i]-1;	   
   }
  
  //printWeights();
  cout<<"\n";
 }
 cout<<"numCorrect = "<<numCorrect<<" Accuracy = "<<(float)numCorrect/(float) LARGE_NUMBER<<"\n";
}
