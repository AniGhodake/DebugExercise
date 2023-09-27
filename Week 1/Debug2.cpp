#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<n+1){
        
        int j = 1,count = i;

        while(j<=i){
            cout<<count;           
            count = count + 1;
            j = j + 1;
        }

        cout<<"\n";
        i = i + 1;
    }
}