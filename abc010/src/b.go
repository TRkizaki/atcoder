package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	a := make([]int64, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
	}

	var sum int64 = 0
	for _, a_i := range a {
		m := a_i
		for m%2 == 0 || m%3 == 2 {
			m--
			sum++
		}
	}

	fmt.Println(sum)
}
