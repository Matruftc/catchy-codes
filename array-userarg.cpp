#include<iostream>

using namespace std;

main()
{
   int marks[5];

   for(int i=0;i<sizeof(marks)/sizeof(int); i++)
   {
    cout<<"\nEnter your marks: ";
    cin>>marks[i];
   }

    for(int i=0;i<sizeof(marks)/sizeof(int);i++)
   {
    cout<<"\nThe marks are: "<<marks[i];
   }
}