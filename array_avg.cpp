#include<iostream>

using namespace std;

main()
{
   int marks[]={12,15,13,15,18,20};

   for(int i=0;i<=sizeof(marks)/sizeof(int);i++)
   {
    cout<<"\nThe marks are: "<<marks[i];
   }

   cout<<"\nsize of array is:"<<sizeof(marks);
   int sizeOfMyArray=sizeof(marks);
   int sizeOfInt=sizeof(int);
   cout<<"\nsize of a single int is: "<<sizeOfInt;
   int  avg=sizeOfMyArray/sizeOfInt;
   cout<<"\nAvg of marks are: "<<avg;
}
