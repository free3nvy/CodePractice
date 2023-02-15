//+build ingore
package main

import (
	"fmt"
	"math/rand"
	"math"
	"quchao1234.com/pkslow_test/mylog"
)


func add(x, y int) int {
	return x + y
}

func swap(x, y string) (string, string){
	return y, x
}

func split(sum int) (x, y int){
	x = sum * 4 / 9
	y = sum - x
	return
}

var c, python, java bool

func getPointer() (myPointer *int){
	a := 234
	return &a
}


func main() {

	numbers := [...]int{0, 0, 0, 0, 0}
	fmt.Println(numbers)

	var p float32 = 22.7
	fmt.Println(p)

	b := *getPointer()	
	fmt.Println(b)

	fmt.Println("fffff")
	mylog.Pksquchao("www.baidu.com")
	const Phi = 1.618
	const Size int = 1024
	const x, y = 1, 2
	const (
		Sunday = iota
		Monday
		Tuseday
		Wednesday
		Thursday
		Friday
		Saturday
	)

	const World = "世界"
	fmt.Println(World, "asfasfsfa")

	const Truth = true
	fmt.Println(Truth)

	fmt.Println(rand.Intn(10))
	fmt.Println(math.Sqrt(7))

	fmt.Println(add(2,19))
	fmt.Println(swap("chao", "qu"))
	fmt.Println(split(6))
	var i int
	// int初值赋0 Boolean 赋False
	fmt.Println(i, c, python, java)

	// := 代表自动给变量类型
	k := 3
	fmt.Println("  %T\n", k)
	v := 42 // change me! printf为格式化输出
	fmt.Printf("v is of type %T\n", v)
}