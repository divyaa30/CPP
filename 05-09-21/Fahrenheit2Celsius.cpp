#include<iostream>
using namespace std;


int main(){
    int S,E,W,i,CT;
    cin>>S>>E>>W;
    
    for (i=S; i<=E; i+=W){
        CT=(i-32)/1.8;
        cout<<i<<"\t"<<CT<<endl;
        
    }

return 0;
    
}
