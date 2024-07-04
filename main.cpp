#include<bits/stdc++.h>
using namespace std;

void options(){
    cout<<"1 . easy"<<endl;
    cout<<"2 . medium"<<endl; 
    cout<<"3 . Hard"<<endl;
}


int main(){
    cout<<"welcome to cypher project"<<endl;
    options();

    string password;
    cout<<"Enter Your Password"<<endl;
    cin>>password;
    for(int i =0 ;i < password.length(); i++){
        int x = password[i];
        cout<<x<<" ";
    }



    

}

