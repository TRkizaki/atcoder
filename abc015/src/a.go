package main

import "fmt"

func main() {
	var a, b string
	fmt.Scan(&a, &b)
	ans := b
	if len(a) > len(b) {
		ans = a
	}
	fmt.Println(ans)
}
