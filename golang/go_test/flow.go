
package main

import (
  "fmt"
)


// 声明一个函数 别的没了
type animal interface {
  description() string
}

type cat struct {
  Type  string
  Sound string
}

type snake struct {
  Type      string
  Poisonous bool
}

func (s snake) description() string {
  return fmt.Sprintf("Poisonous: %v", s.Poisonous)
}

func (c cat) description() string {
  return fmt.Sprintf("Sound: %v", c.Sound)
}

func main() {
	c := make(chan string)
	go func(){ c <- "hello" }()
	msg := <-c
	fmt.Println(msg)

}