/* Debug the code. Find the second largest in the code.*/
#include<iostream>
using namespace std;

/*
Pattern for N = 4
4444
333
22                                              ITS ACTUALLY A PATTERN PRINTING
1
*/

int main(){
  int i,j,n;
    cin>>n;
    for(i=1;i<n;i++){
        for(j=i;j<n;j++){
            cout<<i;
        }
        cout<<endl;
    }
}