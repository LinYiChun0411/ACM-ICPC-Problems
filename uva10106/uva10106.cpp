#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string operator*(string& a,string& b)
{
       //�����J�r�� 
      reverse(a.begin(),a.end());
      reverse(b.begin(),b.end());
      
      for(int k=0;k<a.size();k++)a[k]-='0';
      for(int k=0;k<b.size();k++)b[k]-='0';
      
      
      //�ǳƵ���C�Ŷ��A��l�Ƭ�0 
      string c(a.size()+b.size(),0);
      
      
      //�i�歼�k 
      for(int k=0;k < a.size();k++){
              for(int h=0;h<b.size();h++)
                      c[k+h] += a[k] * b[h];                    
              for(int h=0; h < c.size() ; h++){ //�i��i��ʧ@
                      if( h+1 < c.size())c[h+1] += c[h] / 10;
                      c[h]%=10;
              }
             
      }
     
             
       
              
              
      //�����e�ɪ�0 
      int n=c.size();
      while(n && c[n-1]==0)n--; 
      c.resize(n);
      //�N�r�ꤤ���ƭ���^�r�� 
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
