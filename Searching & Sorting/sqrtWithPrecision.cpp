#include<iostream>
using namespace std;

int mySqrt(int x) {
    int s = 0;
    int e = x;

    int ans = -1;

    int mid = s + (e-s)/2;

    while(s<=e){
        int product = mid*mid;
        if(product == x){
            return mid;
        }
        if(product < x){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

double findPrecision(int n){
    //n is 63 for example
    double sqrt = mySqrt(n); // 7
    int precision = 6;
    double step = 0.1;

    while(precision--){
        double j = sqrt; //7.0

        while(j*j <= n){
            sqrt = j;
            j += step; //7.1
        }
        step = step/10;
    }
    return sqrt;
}

double mySqrtWithMethod2(int x) {
    double s = 0;
    double e = x;

    double ans = 0;

    double mid = s + (e-s)/2;

    while((e-s)>0.0000000000001){
        double product = mid*mid;
        if(product == x){
            return mid;
        }
        if(product < x){
            ans = mid;
            s = mid;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

int main(){

    int n = 63;
    double ans = findPrecision(n);
    // cout << ans << endl;

    //Note cout prints the precision upto 5 points 
    //use printf 

    printf("The ans is :%f",ans);

    double method2Ans = mySqrtWithMethod2(n);
    printf("The method2 is :%f",method2Ans);    


    return 0;
}



