#include<iostream>
using namespace std;
void oddno(int a,int b){
    int c;
    for (int i = a;i<=b;i++){
        if(i%2!=0)
        cout<<i<<" "<<endl;
    
        

    }
    
}
int main(){
    int a;
    int b;
    cout<<" enter 1st no. : ";
    cin>>a;
    cout<<" enter 2nd no. : ";
    cin>>b;
    oddno(a,b);



}