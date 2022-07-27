#include<iostream>
using namespace std;

int main(){
    int x;
for (int i=0;i<=4;i++){
    cin>>x;

if(x>=1 && x<=30){
    for(int j=0;j<=x-1;j++){
        cout<<"*";
    }
    cout<<endl;
}


}

return 0;
}
