package main

import "fmt"

func main() {
    var M, D int
    fmt.Scan(&M, &D)
    ans := M % D == 0
    if ans {
        fmt.Println("YES")
    } else {
        fmt.Println("NO")
    }
}