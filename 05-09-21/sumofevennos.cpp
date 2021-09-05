#include<iostream>
using namespace std;


int main(){
    
    int i, N, sum=0;
    cin>>N;
    
    
    for (i=1; i<=N; i++){
        if (i%2==0){
            sum=sum+i;
        }
    }
    cout<<sum;
  
}