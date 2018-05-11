#include<iostream>
#include<string.h>

using namespace std;


class MyString
{
public:
    MyString();

    MyString(const char *p);

    MyString(const MyString& s);

    ~MyString();

    void printCom();

    MyString& operator=(const char *p);



    MyString&  operator=(const MyString& s);

    char&  operator[]( int i);

   friend ostream& operator <<(ostream& out,  MyString& s);

   friend istream& operator >>(istream& in,  MyString& s);



private:
    int m_len;

    char *m_p;

};
