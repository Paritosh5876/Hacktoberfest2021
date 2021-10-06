#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str[200], word[20];
    int i=0, j, temp, countW=0, chk;
    cout<<"Enter the String: ";
    gets(str);
    cout<<"Enter the Word: ";
    gets(word);
    while(str[i]!='\0')
    {
        temp = i;
        j=0;
        while(word[j]!='\0')
        {
            if(str[i]==word[j])
                i++;
            j++;
        }
        chk = i-temp;
        if(chk==j)
            countW++;
        i = temp;
        i++;
    }
    cout<<"\nOccurrence of '"<<word<<"' = "<<countW;
    cout<<endl;
    return 0;
}