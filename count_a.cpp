#include<iostream>
using namespace std;
int main (){
string b;
cin>>b;
int s=0;
for (int i=0; i<b.length(); ++i){
    if (b[i]=='a'){
    s++;}
}
cout<<s;

return 0;
}
