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
        if(s[i]<'A' || s[i]>'z' )
             s[i] = 0; 
        else
            z++;
 
    }
    if(z==0)
    cout<<"empty string"; 
    else
      for(int i=0; i<s.length(); i++)
    {
        if(!(s[i]==0))
            cout<<s[i];
    }
 
    return 0;
    
}