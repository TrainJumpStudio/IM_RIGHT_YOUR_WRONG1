package main

import (
	"fmt"
	"time"
)

func createAndSumArr(x int) (int64, float64) {

	//start time
	start := time.Now()

	//arr
	arr := make([]int64, x)

	//fill arr
	for i := 0; i < x; i++ {
		arr[i] = int64(i)
	}

	//calculate arrSum

	var arrSum int64 = 0

	for _, num := range arr {
		arrSum += num

	}

	return arrSum, (time.Since(start).Seconds())

}

func main() {
	sum, t := createAndSumArr(100000000)

	fmt.Printf("Sum -> %d, Time -> %f", sum, t)
}
