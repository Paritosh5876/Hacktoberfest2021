#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int palind(char c[],int n)
{
  int i,j;
  j=n-1;
  for(i=0;i<n/2;i++,j--)
  {
    if (c[i]!=c[j])
    {

      cout<<"\n not palindrome";
      exit(0);
    }
    else
      cout<<"\n palindrome";
      exit(0);
  }
return 0;
}
int main()
{
  char a[20];
  int i;
  cout<<"\n Enter number or string";
  cin>>a;
  i=strlen(a);
  palind(a,i);
  return 0;
}
