package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    sum := 0
    for x := 1; x <= n; x++ {
        sum += x * 10000
    }
    ans := float64(sum) / float64(n)
    fmt.Println(ans)
}