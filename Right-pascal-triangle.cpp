#include<iostream>
using namespace std;

int main() {
     int n;
     cin>>n;
     // Upper half
     for(int i=1;i<=n;i++){
          for(int j=1;j<=i;j++){
               cout<<"* ";   
          }
          cout<<endl;
     }
     // Lower half
     for(int j=n-1;j>=1;j--){
          for(int k=1;k<=j;k++){
                cout<<"* ";
          }
          cout<<endl;
     }
     
     return 0;
}