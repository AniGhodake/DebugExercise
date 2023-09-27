#include<iostream>
using namespace std;

int main() {
	char c;
    cin>>c;
    if('a'<=c && c<= 'z'){ // insted of && there was ||
        cout<<"0";
    }
	else if('A'<=c && c<= 'Z'){   // insted of && there was ||
        cout<<"1";
    }
    else{
        cout<<"-1";
    }
}