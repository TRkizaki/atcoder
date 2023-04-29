package main

import (
    "fmt"
)

func main() {
    var a, d int64
    fmt.Scan(&a, &d)

    ans := max((a + 1) * d, a * (d + 1))
    fmt.Println(ans)
}

func max(x, y int64) int64 {
    if x > y {
        return x
    }
    return y
}