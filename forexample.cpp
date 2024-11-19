#include<iostream>
using namespace std;

int decTobin(int decnum){
    int ans=0; int pow=1;

    while (decnum >0)
    {
        int rem = decnum %2;
        decnum /=2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;

}

int main(){
    int n;
    cout<<"inter n:";
    cin>>n;

    cout<< decTobin(n)<<endl;
    
return 0;
}
