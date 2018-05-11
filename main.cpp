#include <iostream>
#include<Mystring.h>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{


       MyString s1,s3;
         int i;
       cin>>i;
        MyString s2="yzm";
       // MyString s2_2=NULL;
      s1=s3=s2;
        s2[2]='w';
        printf("%c\n",s2[2]);
       //s1.printCom();
        cout<<"----------"<<endl;


        cout<<s1<<" 111"<<endl;



   return 0;
}

