#include<iostream>

#include<Mystring.h>

#include<string.h>
#include<stdio.h>
using namespace std;



MyString::MyString(){
    //无参构成一个空串
    m_len=0;

    m_p=new char[m_len+1];

    strcpy(m_p,"");

}
MyString::MyString(const char *p){

if(p==NULL){

    m_len=0;

    m_p=new char[m_len+1];

    strcpy(m_p,"");



}else{


    m_len=strlen(p);

    m_p=new char[m_len+1];

    strcpy(m_p,p);

}


}
//拷贝构造函数。
MyString::MyString(const MyString& s){

    m_len=s.m_len;

    m_p=new char[m_len+1];

    strcpy(m_p,s.m_p);


}
MyString::~MyString(){


    if(m_p!=NULL){

      delete [] m_p;

      m_p = NULL;

       m_len = 0;
    }




}
void MyString::printCom(){

  cout<<"m_len:"<<m_len<<endl;

  cout<<"m_p:"<<endl;

  cout<< m_p<<endl;


}
MyString& MyString::operator=(const char *p){

    if(p!=NULL){

        m_len =strlen(p);

        cout<<"hhhh"<<endl;

        m_p = new char[strlen(p)+1];

        strcpy(m_p,p);

    } else{

       m_len=0;

       m_p =new char[strlen(p)+1];

        strcpy(m_p,"");

   }

    return *this;
}

MyString&  MyString::operator=(const MyString& s){

    m_len = s.m_len;


    cout<<"dhdhfh"<<endl;

    m_p = new char[strlen(s.m_p)+1];

    strcpy(m_p,s.m_p);


    return *this;


}
char&  MyString:: operator[]( int i){

     return m_p[i];



}
ostream& operator <<(ostream& out, MyString& s){

    out<<"m_len:"<<s.m_len<<endl;

    out<<"*m_p:"<<s.m_p<<endl;

    return out;


}

istream& operator >>(istream& in,  MyString& s){

        in>>s.m_len;
        return in;



}
