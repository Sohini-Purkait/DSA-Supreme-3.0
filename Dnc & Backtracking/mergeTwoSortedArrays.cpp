#include<iostream>
#include<vector>
using namespace std;

void mergeSortedArrays(int arr[],int sizeArr,int brr[],int sizeBrr, vector<int> &ans){
    int i = 0; //for arr
    int j = 0; //for brr

    //jab tak i and j arrays k bounds k andar hai
    while(i < sizeArr && j < sizeBrr){
        if(arr[i] < brr[j]){
            ans.push_back(arr[i]);
            i++;
        }else{
            ans.push_back(brr[j]);
            j++;
        }
    }

    //agar main yaha tk aagya
    //toh 2 cases ho skte h
    //1 case -> arr me still elements bache hai
    while(i < sizeArr){
        ans.push_back(arr[i]);
        i++;
    }

    //2 case -> brr me still elements bache hai
    while(j < sizeBrr){
        ans.push_back(brr[j]);
        j++;
    }

}

int main(){
    int arr[] = {10, 30, 50, 70};
    int sizeArr = 4;

    int brr[] = {20, 40, 60, 80, 90, 100};
    int sizeBrr = 6;

    vector<int> ans;
    mergeSortedArrays(arr,sizeArr,brr,sizeBrr,ans); 
    //printing ans
    for(int num : ans){
        cout << num << " ";
    }

    return 0;
}