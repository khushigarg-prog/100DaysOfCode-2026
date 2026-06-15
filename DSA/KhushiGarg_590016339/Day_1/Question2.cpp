#include<iostream>
#include<vector>
using namespace std;
int findSum(vector<int>& arr){
    int sum=0;
    for(int num: arr){
        sum=sum+num;
    }
    return sum;
}
int main(){
    vector<int> arr = {3,8,2,9,1};
    cout<<findSum(arr);
}