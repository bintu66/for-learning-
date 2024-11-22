#include<iostream>
using namespace std;

int deTobin(int decnum){
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
    cout<<" n:";
    cin>>n;

    cout<< deTobin(n)<<endl;
    
return 0;
}
