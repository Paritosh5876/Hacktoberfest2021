//ascii of lowercase is greater than uppercase

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

string a="Ruhika";
//"a"-"A"=32;pull a 32 back

for(int i=0;i<a.size(); i++)
 {
    if(a[i]>='a'&& a[i]<='z')
    { //1.lower to upper
      a[i]-=32;
    }
    cout<<a[i];
}
cout<<endl;

//2.upper to lower using #include<algorithm>
        //passing string   start from begin
transform(a.begin(),a.end(), a.begin(), :: toupper);
cout<<a<<endl;


transform(a.begin(),a.end(), a.begin(), :: tolower);
cout<<a<<endl;








//upper to lower
  for(int i=0;i<a.size(); i++)
{
    if(a[i]>='A'&& a[i]<='Z')
    { //if some letters are already in upper case
      a[i]+=32;
    }
    cout<<a[i];
    
    
}

}

