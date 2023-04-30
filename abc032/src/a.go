package main

import "fmt"

func main() {
    var a, b, n int
    fmt.Scan(&a, &b, &n)
    for x := n; ; x++ {
        if x%a == 0 && x%b == 0 {
            fmt.Println(x)
            break
        }
    }
}