#include<iostream>
using namespace std;
int square(int x){
    int square;
    
        square =  (x*x);
         
    
    return square;
}
int main(){
    int n;
    cout<<"enter no. : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        cout<<square(i)<<" "<<endl;
    }
    
}