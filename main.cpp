

#include <iostream>
#include <cmath>

double f(double x){ // the function you are taking the integral of
    return x*x+log(x);
}

int main() {
    int l,r;
    double n;
    std::cout<<"enter the left and right bound then the number of partitions"<<std::endl;
    std::cin>>l>>r>>n;
    double h = (r-l)/n;
    double mid = 0;
    
    for(int i=1;i<=n;++i){
        mid+= f(l+(i- .5)*h);
    }
    mid = h*mid;
    std::cout<<mid;
    
    

    return 0;
}
