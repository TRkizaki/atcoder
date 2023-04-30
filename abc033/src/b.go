package main

import (
	"fmt"
)

func main() {
    var n int
    fmt.Scan(&n)
    
    sp := make([]struct{ s string; p int64 }, n)
    var sum int64 = 0
    for i := 0; i < n; i++ {
        fmt.Scan(&sp[i].s, &sp[i].p)
        sum += sp[i].p
    }
    
    for _, city := range sp {
        if city.p > sum/2 {
            fmt.Println(city.s)
            return
        }
    }
    fmt.Println("atcoder")
}