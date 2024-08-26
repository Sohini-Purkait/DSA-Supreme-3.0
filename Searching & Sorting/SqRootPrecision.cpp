#include<iostream>
using namespace std;

int mySqrt(int n){
    int s = 0, e = n;
    int ans = 0;
    while(s <= e){
        int mid = (s + e) >> 1;
        if(mid * mid <= n){
            ans = mid;
            s = mid + 1; //go right
        }else{
            e = mid - 1; //go left
        }
    }
    return ans;
}

double myPrecisionSqrt(int n){
    double sqrt = mySqrt(n);
    int precision = 9;
    double step = 0.1;
    while(precision--){
        double j = sqrt;  //j->7.0
        while(j * j <= n){
            //store and compute
            sqrt = j; 
            j += step; //j->7.1
        }
        step /= 10; //update for next precison ans
    }
    return sqrt;
}



////////method: 2////////

double BSPrecision(int n){
    double start = 0;
    double end = n;
    double ans = 0;
    while((end - start) >= 0.00001){
        double mid = (start+end)/2;
        double sqr = mid * mid;      
        if(sqr <= n){
            ans = mid;
            start = mid;
        }else{
            end = mid;
        }
    }
    return ans;
}

int main(){
    int n = 63;
    // double ans = myPrecisionSqrt(n);
    // cout << ans << endl;
    // //cout only prints 5 precision

    // //zada kese kre?
    // printf("Precision Sqrt: %.9f \n",ans); //c style
    
    double ans = BSPrecision(n);
    printf("Precision Sqrt: %f \n", ans);
    
    
    return 0;
}