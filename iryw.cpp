#include <iostream>
#include <vector>
#include <chrono>


std::pair<long long, double> createAndSumArr(int x){

    //start time
    auto start = std::chrono::high_resolution_clock::now();


    //creates vector with size x
    std::vector<long long> arr(x);


    // fill arr with ax values
    for(int i = 0; i < x; i++){
        arr[i] = i;
    }


    //get sum

    long long arrSum = 0;


    for(int i = 0; i < x; i++){
        arrSum+=arr[i];
    }    
    
    std::chrono::duration<double> end = std::chrono::high_resolution_clock::now()-start;

    return {arrSum, end.count()};
}

int main(){

    auto res = createAndSumArr(100000000);

    std::cout << "Sum -> " << res.first << ", Time -> " << res.second;

    return 0;
}
