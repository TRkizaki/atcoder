package main

import "fmt"

func main() {
	var s, t int64
	fmt.Scan(&s, &t)
	ans := t - (s - 1)
	fmt.Println(ans)
}
