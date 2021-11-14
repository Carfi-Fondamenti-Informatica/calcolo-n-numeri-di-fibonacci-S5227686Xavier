#include <iostream>
using namespace std;

int main() {
   int a=0,b=1,i=0,n=0,c=0;
   cin >> n;
   cout <<b<<endl;
   if(n>=2){
      for(i=0;i<=n;i++){
         c=a+b;
         cout <<c<<endl;
         a=b;
         b=c;
      }
   }else{
      cout << "errore"<<endl;
   }
   return 0;
}
