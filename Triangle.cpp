#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){  
            cout<<" ";           //Single space will make it look like a triangle but if we want to make it look like a pyramid then we have to give 3 spaces.

        }
        for(int j=1;j<=i;j++){  
            cout<<"* ";          //make sure to put a common space...
        }
        cout<<endl;
    }
    return 0;
}
