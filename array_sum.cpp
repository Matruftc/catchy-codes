#include<iostream>

using namespace std;

int sum=0;
int avg=1;
main()
{
   int marks[5]={12,45,23,47,78};

    for(int i=0;i<sizeof(marks)/sizeof(int);i++)
   {
    cout<<"\nThe marks are: "<<marks[i];
   }

    for(int i=0;i<sizeof(marks)/sizeof(int);i++)
   {
    sum=sum+marks[i];
   }

  cout<<"\nHere is the total sum of Marks are:"<<sum;


}