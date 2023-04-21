package main

import (
	"fmt"
	"sort"
)

func main() {
	var n int
	fmt.Scan(&n)

	t := make([]int64, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&t[i])
	}

	sort.Slice(t, func(i, j int) bool {
		return t[i] < t[j]
	})

	ans := t[0]
	fmt.Println(ans)
}
