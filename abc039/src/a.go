package main

import "fmt"

func main() {
    var a, b, c int
    fmt.Scan(&a, &b, &c)
   
    ans := ((a * b) + (b * c) + (c * a)) * 2
    fmt.Println(ans)
}