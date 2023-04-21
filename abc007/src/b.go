package main

import (
    "fmt"
)

func main() {
    var a string
    fmt.Scan(&a)
    
    if len(a) > 1 {
        fmt.Println(a[:len(a)-1])
        return
    }
    
    if a[0] == 'a' {
        fmt.Println("-1")
        return
    }
    
    fmt.Printf("%c\n", a[0]-1)
}