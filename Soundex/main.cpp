//
//  main.cpp
//  Soundex
//
//  Created by 許韋中 on 2019/5/6.
//  Copyright © 2019 許韋中. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
          {
              for(int i=1;i<s.size();i++)
              {
              if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='H'||s[i]=='W'||s[i]=='Y'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='h'||s[i]=='w'||s[i]=='y')
                      s[i]='0';
                  if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V'||s[i]=='b'||s[i]=='f'||s[i]=='p'||s[i]=='v')
                      s[i]='1';
              if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z'||s[i]=='c'||s[i]=='g'||s[i]=='j'||s[i]=='k'||s[i]=='q'||s[i]=='s'||s[i]=='x'||s[i]=='z')
                      s[i]='2';
                  if(s[i]=='D'||s[i]=='T'||s[i]=='d'||s[i]=='t')
                      s[i]='3';
                  if(s[i]=='L'||s[i]=='l')
                      s[i]='4';
                  if(s[i]=='M'||s[i]=='N'||s[i]=='m'||s[i]=='n')
                      s[i]='5';
                  if(s[i]=='R'||s[i]=='r')
                      s[i]='6';
              }
              char temp;
              for(int i=0;i<s.size()-1;i++)
              {
                  temp=s[i];
                  if(temp==s[i+1])
                  {
                      s[i+1]='0';
                      int a=i+1;
                      for(;;)
                      {
                          a++;
                          if(s[a]==temp)
                              s[a]='0';
                          else
                              break;
                      }
                  }
              }
              for(int i=0;i<s.size();i++)
              {
                  if(s[i]!='0')
                      cout<<s[i];
              }
              cout<<endl;
          }
    return 0;
}
