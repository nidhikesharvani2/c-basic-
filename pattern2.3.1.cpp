# include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i+j-1;   
                    j=j+1;
        }
        cout<<endl;
        i=i+1;

    }/*
    1
    23
    345*/
}