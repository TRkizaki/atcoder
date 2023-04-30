package main

import (
	"fmt"
)

func main() {
    var n int
    fmt.Scan(&n)
    ans := n
    if n % 2 == 0 {
        ans -= 1
    } else {
        ans += 1
    }
    fmt.Println(ans)
}
