package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func distinct() {
	r := bufio.NewReader(os.Stdin)

	ln, _, _ := r.ReadLine()
	n, _ := strconv.Atoi(string(ln))

	ln, _, _ = r.ReadLine()
	astr := strings.Split(string(ln), " ")
	u := make(map[int]struct{})
	for _, as := range astr {
		a, _ := strconv.Atoi(as)
		u[a] = struct{}{}
	}

	l := len(u)
	fmt.Println(n)
	for k := 2; k <= n; k++ {
		if k > l {
			fmt.Println(0)
		} else {
			fmt.Println(l / k)
		}
	}
}
