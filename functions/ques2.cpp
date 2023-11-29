#include<iostream>
using namespace std;
float circleArea(int x){
    float area;
    area = 3.14*x*x;
    return area;
}

int main(){
    int n;
    cin>>n;
    cout<<circleArea(n);
}