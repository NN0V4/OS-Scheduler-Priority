/* 
SARAH QASIM--->143884
YAQEEN JEHAD--->148110
*/


#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
using namespace std;

struct Process 
{
string name;
float arr_T;
float pro_T;
int pri;
float resp_T;
float turn_T;
float delay;
};

void scheduler1( Process p[], int n, ofstream &outFile)
{
      //first start
      float FirstS=0;
      for ( int i = 0 ; i < n ; i++ )
      {
        p[i].resp_T=FirstS-p[i].arr_T;
        FirstS+=p[i].pro_T;

        if(p[i].arr_T!=0)
        {
        p[i].pro_T+=p[i-1].pro_T;
        }

        p[i].turn_T=p[i].pro_T-p[i].arr_T;
        p[i].delay=p[i].resp_T;

      }
for (int i=0 ; i<n ;i++){
         outFile<<p[i].name;
     }
     outFile<<endl;
      for(int i=0;i<n;i++)
      {
         outFile<<p[i].name<<":(response="<<p[i].resp_T<<", turnaround="<<p[i].turn_T<<", delay="<<p[i].delay<<")\n";

      }
}


void sortingA (Process p[], int n){
      for (int i=0 ; i<n ;i++)
     {
           for (int j = i + 1; j < n; j++) {
                   
                if (p[i].arr_T > p[j].arr_T) {
                Process temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
            else if(p[i].arr_T == p[j].arr_T){
                         if (p[i].pri < p[j].pri) 
                         {
                          Process temp = p[i];
                          p[i] = p[j];
                          p[j] = temp;
                          } 
                       } 
                    }
   }  
   
   int x=0;
   for (int i=0 ; i<n ;i++){
       
       x+=p[i].pro_T;
       if(i==0){
        continue;
       }
       for (int j = i + 1; j < n; j++){
        if(p[j].arr_T<=x ){
          if (p[i].pri < p[j].pri) 
                         {
                          Process temp = p[i];
                          p[i] = p[j];
                          p[j] = temp;
                          }   
       }
       
       
      
       }
   }
    
    
}



int main()
{

ifstream inFile("in.txt");
ofstream outFile("out.txt");

int N ; //Number Of Processes 
//cout<<"enter number of Processes\n";
inFile>>N;

Process p[N]; // Array of Porcesses
for( int i=0 ; i<N ; i++ )
{
    //cout<<"enter name and arr\n";
inFile>> p[i].name >> p[i].arr_T >>p[i].pro_T >>  p[i].pri;
}

sortingA(p,N);
scheduler1(p,N,outFile);
inFile.close();
outFile.close();
return 0;
    
}
