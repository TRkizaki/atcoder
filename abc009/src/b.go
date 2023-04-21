package main

import (
	"fmt"
	"sort"
)

func main() {
	var n int
	fmt.Scan(&n)
	a := make([]int64, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
	}
	sort.Slice(a, func(i, j int) bool { return a[i] > a[j] })
	for i := 1; i < n; i++ {
		if a[i] != a[i-1] {
			fmt.Println(a[i])
			break
		}
	}
}
