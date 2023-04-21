package main

import "fmt"

func main() {
	var x, y uint64
	fmt.Scan(&x, &y)
	ans := y / x
	fmt.Println(ans)
}
