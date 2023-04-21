package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	ans := n + 1
	if n == 12 {
		ans = 1
	}
	fmt.Println(ans)
}
