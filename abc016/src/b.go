package main

import "fmt"

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)
	p := a+b == c
	m := a-b == c
	var ans byte
	if p && m {
		ans = '?'
	} else if p && !m {
		ans = '+'
	} else if !p && m {
		ans = '-'
	} else {
		ans = '!'
	}
	fmt.Printf("%c\n", ans)
}
