package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	ans := n%3 == 0
	if ans {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
