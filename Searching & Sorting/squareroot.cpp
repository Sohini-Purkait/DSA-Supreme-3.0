#include<iostream>
using namespace std;

double mySqrt(int x) {
        int s = 0;
        int e = x;
        long long int mid = s+(e-s)/2;
        int ans = -1;

        while(s <= e){
            long long int product = mid * mid;
            if(product == x){
                return mid;
            }
            if(product < x){
                //may or may not be
                //store and compute
                ans = mid;
                //go to right to find more closer answer
                s = mid + 1;
            }else{
                e = mid - 1;
            }
            mid = s+(e-s)/2;
        }
        // return ans;

        double sqrtAns = (double)ans;

        int precision;
        cout << "Enter the precision upto how many digits: " << endl;
        cin >> precision;
        double factor = 1;
        double finalAns = sqrtAns;

        for(int i=0; i<precision; i++){
            factor = factor/10.0;
            for(int n=0; n<=9; n++){
                double toAdd = n*factor;
                double newAns = sqrtAns + toAdd; 
                if((newAns*newAns)< x){
                    finalAns = sqrtAns + toAdd;

                }else{
                    break;
                }
            }
            sqrtAns = finalAns;
        }
        return finalAns;
    }

int main(){
    int num = 54;
    double ans =  mySqrt(num);
    cout << ans << endl;
    
    return 0;
}