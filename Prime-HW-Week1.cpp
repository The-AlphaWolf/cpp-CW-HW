#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int c=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                c=1;
                break;
            }
        }
        if(c==0){
            cout<<i<<"\t";
        }
        i++;
    }
}
