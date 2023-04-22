package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	all := 0
	for a := 1; a <= 9; a++ {
		for b := 1; b <= 9; b++ {
			all += a * b
		}
	}
	x := all - n
	for a := 1; a <= 9; a++ {
		for b := 1; b <= 9; b++ {
			if a*b == x {
				fmt.Printf("%d x %d\n", a, b)
			}
		}
	}
}
