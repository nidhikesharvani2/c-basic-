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
        while(j<=n){
            cout<<i;// i because that is change the row//
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    /*output=
    111
    222
    333*/

}