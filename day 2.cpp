#include<iostream>
#include<conio.h>
using namespace std;
main()
{
   char n;
   cout<<"enter any char = ";
   cin>>n;
   if(('A'<=n && 'Z'>=n)|| ('a'<=n && 'z'>=n))
   {
      cout<<"Alphabet";
   }
   else
   {
      cout<<"Not an alphabet";
   }
getch();
}
