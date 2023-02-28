package main

import (
	"fmt"
	"net"
	"sync"
	"time"
)

const (
	MAX_CONN = 10
)

func main() {
	// 搞协程同步的???
	// 主协程下面的子协程 执行完毕后 再关闭主协程
	var wg sync.WaitGroup
	wg.Add(1)

	// 
	for i := 0; i < MAX_CONN; i++ {
		fmt.Println("瞿超！！！")
		go Conn("127.0.0.1:8088", i)
		// 只等待一点点时间
		time.Sleep(time.Millisecond * 100)
	}
	wg.Wait()
}

func Conn(addr string, id int) {
	// 建立tcp连接!!
	conn, err := net.Dial("tcp", addr)
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Println("connect ", id)
	go func() {
		buf := make([]byte, 1024)

		// 无限循环下去！！
		for {
			n, err := conn.Read(buf)
			if err != nil {
				break
			}
			fmt.Println(id, "read: ", string(buf[:n]))
		}
	}()
	time.Sleep(time.Second * 1)

	// 这也是个无限循环？？
	for {
		_, err := conn.Write([]byte("fuck your mum"))
		if err != nil {
			break
		}
		time.Sleep(time.Second * 10)
		fmt.Println("我在这！！")
	}
}

