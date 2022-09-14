#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a;
    for (int i=0;i<a;i++){
        cin>>b>>c;
        if (b<c){
            cout<<"NO"<<endl;
        }
        else{
            if((c*(c+1)/2)<=b){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}
