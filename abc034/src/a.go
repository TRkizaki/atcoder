package main

import "fmt"

func main() {
    var x, y int64
    fmt.Scan(&x, &y)

    var ans string
    if x < y {
        ans = "Better"
    } else {
        ans = "Worse"
    }

    fmt.Println(ans)
}