package main

import (
	"fmt"

)

func swap1(a, b *int){
  *a, *b = *b, *a
}



func main(){
 a := 1
 p := &a//取址&
 fmt.Printf("%d\n", *p);//取值*
 *p = 199
 swap1(&a, p)


 b := 2; c := 3
 

 fmt.Printf("%d/n", b)
 fmt.Printf("%d/n", c)


}