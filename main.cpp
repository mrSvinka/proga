#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main (){
    int z=0;
    string s;
    getline(cin, s);
 
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='A' || s[i]=='a' || s[i]=='o' || s[i]=='O' || s[i]=='U' || s[i]=='u' || s[i]=='E' || s[i]=='e' || s[i]=='I' || s[i]=='i')
             s[i] = 0; 
        else
            z++;
 
    }
    if(z==0)
    cout<<"empty"; 
    else
      for(int i=0; i<s.length(); i++)
    {
        if(!(s[i]==0))
            cout<<s[i];
    }
 
    return 0;
    
}