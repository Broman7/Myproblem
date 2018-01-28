#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    char* str = new char;
    double m,a;
    int size_str = 1;
    while(1)
    {
        char temp;
        temp = getchar();

        if(temp == '\n')
            break;

        *(str + size_str - 1) = temp;
        size_str++;

        char* tstr = new char[size_str];

        for(int i = 0; i < size_str - 1; i++)
            tstr[i] = str[i];
        delete str;
        str = tstr;

    }
    m = atof(strtok(str, " "));
    while(1)
    {
      char* tstr = strtok(NULL, " ");
       if(tstr == NULL)break;
        a = atof(tstr);
       // cout  << "A:"<<a<<endl;
        if(a<m)m=a;

    }

    cout <<fixed <<m<<endl;
        delete str;

    return 0;
}
