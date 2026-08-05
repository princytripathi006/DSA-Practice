#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    int ans1[2*n];
    for(int i=0;i<n;i++){
        ans1[i] = nums[i];
        ans1[i+n]=nums[i];
    }
    for(int i=0;i<2*n;i++){
        cout << ans1[i] << " ";    }
}