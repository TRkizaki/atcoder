package main

import "fmt"

func main() {
    var l, h int64
    var n int
    fmt.Scan(&l, &h, &n)
    a := make([]int64, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&a[i])
    }
    for _, a_i := range a {
        if a_i < l {
            fmt.Println(l - a_i)
        } else if h < a_i {
            fmt.Println("-1")
        } else {
            fmt.Println("0")
        }
    }
}