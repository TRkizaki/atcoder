package main

import "fmt"

func main() {
    var a, b, c, d int
    fmt.Scan(&a, &b, &c, &d)
    var ans string
    if b*c == d*a {
        ans = "DRAW"
    } else if b*c > d*a {
        ans = "TAKAHASHI"
    } else {
        ans = "AOKI"
    }
    fmt.Println(ans)
}