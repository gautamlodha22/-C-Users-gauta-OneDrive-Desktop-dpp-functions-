#include<iostream>
using namespace std;
int digitCount(int x){
    int count = 0;
    while(x>0){
         x = x/10;
    count = count + 1;
    
    } 
    return count;
    
}
int square(int x){
    return x*x;

}
int main(){
    int n;
    cout<<" enter a digit : ";
    cin>>n;
    cout<<" no. of digit  : "<<digitCount(n)<<endl;
    int a = digitCount(n);

    cout<<square(a);
}