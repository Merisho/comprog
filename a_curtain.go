package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func curtains() {
	r := bufio.NewReader(os.Stdin)
	ln, _, _ := r.ReadLine()

	nums := strings.Split(string(ln), " ")
	win, _ := strconv.Atoi(nums[0])
	curt, _ := strconv.Atoi(nums[1])

	t := curt * 2
	diff := win - t
	if diff < 0 {
		fmt.Println(0)
	} else {
		fmt.Println(diff)
	}
}
