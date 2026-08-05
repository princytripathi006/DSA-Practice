#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int runningSum[n];
    int nums[n];
    
    for(int i=0;i<n;i++){
       cin >> nums[i];
    }
    runningSum[0] = nums[0];
    for(int i = 1; i < n; i++)
    {
    runningSum[i] = runningSum[i - 1] + nums[i];
    }
    for(int i=0;i<n;i++){
        cout << runningSum[i] << " ";
    }   
} 