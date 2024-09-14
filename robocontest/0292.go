package main

import (
  "fmt"
)

func main() {
  var a int
  fmt.Scan(&a)

  index := 0
  value := 0
  for index < a {
    value++
    index += value
  }

  fmt.Println(value - (index - a))
}
