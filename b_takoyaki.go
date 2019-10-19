package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func takoyaki() {
	r := bufio.NewReader(os.Stdin)

	ln, _, _ := r.ReadLine()
	n, _ := strconv.Atoi(string(ln))

	ln, _, _ = r.ReadLine()
	dstr := strings.Split(string(ln), " ")
	var dint []int
	for _, ds := range dstr {
		di, _ := strconv.Atoi(ds)
		dint = append(dint, di)
	}

	s := 0
	for i, d := range dint {
		for j := i + 1; j < n; j++ {
			s += d * dint[j]
		}
	}

	fmt.Println(s)
}
