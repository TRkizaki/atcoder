package main

import (
	"fmt"
	"sort"
)

func main() {
	var abc [3]int64
	for i := 0; i < 3; i++ {
		fmt.Scan(&abc[i])
	}
	sort.Slice(abc[:], func(i, j int) bool {
		return abc[i] < abc[j]
	})
	ans := abc[1]
	fmt.Println(ans)
}
