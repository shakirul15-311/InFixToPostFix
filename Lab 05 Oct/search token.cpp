#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int k=0;
    vector<string>v;
  char str[] ="This is a program";
  char d[]="program";
  char * pch;

  pch = strtok (str," ,.-");
  while (pch != NULL)
  {
      v.push_back(pch);
      ++k;

    pch = strtok (NULL, " ,.-");
  }

  for(int i=0;i<k;++i){
        if(v[i]==d){
            cout<<"found ";
        }
    }


  return 0;
}
