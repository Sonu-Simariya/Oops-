#include<iostream>
using namespace std;
/*int main(){
    int n,c=0;
    cin>>n;
    int i=0;
    while(i<=n){
        c=i+c;
        i=i+1;
    }
    cout<<"the sum is "<<c;
}*/

//sum of even and odd=1 number .
int main(){
    int a,c=0;
    cin>>a;
    int i=1;
    while(i<=a){
        if(i%2==0){
            c=c+i;
        }
        i=i+1;
    }
    cout<<"the sum is "<<c<<endl;
}