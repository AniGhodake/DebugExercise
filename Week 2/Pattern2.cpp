/* Debug the code. Correct the code for printing the pattern.*/
/*
Pattern for N = 5
1234554321
1234**4321
123****321
12******21
1********1
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0,gaps = n-1;
    while(i<n){
        int k=0,gaps=n-1-i;
        while(k<gaps){
            cout<<" ";
            k++;
        }
        int num = i+1;
        while(num>0){
            cout<<num;
            num = num - 1;
        }
        k = 2;
        while(k<=(i+1)){
            cout<<k;
            k++;
        }
        k =0;
        while(k<gaps){
            cout<<" ";
            k++;
        }
        i++;
        cout<<"\n";
    }
}