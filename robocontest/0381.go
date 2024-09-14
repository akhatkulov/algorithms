package main

import (
    "fmt"
)

func main() {
    var N int
    fmt.Scan(&N)
    timeInCycle := N % 50

    if timeInCycle >= 0 && timeInCycle < 25 {
        fmt.Println("O__")
    } else if timeInCycle >= 25 && timeInCycle < 29 {
        fmt.Println("OO_")
    } else if timeInCycle >= 29 && timeInCycle < 35 {
        fmt.Println("_O_")
    } else {
        fmt.Println("__O")
    }
}
