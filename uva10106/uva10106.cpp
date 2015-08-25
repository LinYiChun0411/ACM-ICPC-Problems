#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string operator*(string& a,string& b)
{
       //反轉輸入字串 
      reverse(a.begin(),a.end());
      reverse(b.begin(),b.end());
      
      for(int k=0;k<a.size();k++)a[k]-='0';
      for(int k=0;k<b.size();k++)b[k]-='0';
      
      
      //準備答案C空間，初始化為0 
      string c(a.size()+b.size(),0);
      
      
      //進行乘法 
      for(int k=0;k < a.size();k++){
              for(int h=0;h<b.size();h++)
                      c[k+h] += a[k] * b[h];                    
              for(int h=0; h < c.size() ; h++){ //進行進位動作
                      if( h+1 < c.size())c[h+1] += c[h] / 10;
                      c[h]%=10;
              }
             
      }
     
             
       
              
              
      //消除前導的0 
      int n=c.size();
      while(n && c[n-1]==0)n--; 
      c.resize(n);
      //將字串中的數值轉回字元 
      for(int k=0;k<c.size();k++)c[k]+='0';
      if(c.size()==0)c="0";
      reverse(c.begin(),c.end());     
      return c;
}

int main(){
 string a,b;
 while(cin >> a >> b) cout << a*b << endl;
 
 
 
 return 0;
}
