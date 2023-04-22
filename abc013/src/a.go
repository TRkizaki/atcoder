package main

import "fmt"

func main() {
	var x string
	fmt.Scanln(&x)
	ans := int(x[0]) - int('A') + 1
	fmt.Println(ans)
}
