#include<iostream>

using namespace std;

int main()
{
   int marks[]={12,15,13,15,18,20};

   for(int i=0;i<=sizeof(marks)/sizeof(int);i++)
   { 
     for(int j=i+1;j<sizeof(marks)/sizeof(int);j++)
     if(marks[i]==marks[j])
     {
     cout<<"\nDuplicacy is: "<<marks[j];
    
   }}
}