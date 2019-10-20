package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	r := bufio.NewReader(os.Stdin)
	ln, _, _ := r.ReadLine()

	n, _ := strconv.Atoi(string(ln))
	var a []int
	for i := 0; i < n; i++ {
		var s string
		if i == n - 1 {
			s, _ = r.ReadString('\n')
		} else {
			s, _ = r.ReadString(' ')
		}

		ai, _ := strconv.Atoi(strings.TrimSpace(s))
		a = insert(a, ai)
		fmt.Println(a)
	}

	m := len(a) / 2
	x := sum(a[m:])
	y := sum(a[:m])

	fmt.Println(x * x + y * y)
}

func insert(a []int, ai int) []int {
	l := len(a)

	if l == 0 {
		return []int{ai}
	}

	m := len(a) / 2

	if m == 0 {
		if ai > a[m] {
			return append(a, ai)
		}

		return append([]int{ai}, a...)
	}

	if ai >= a[m - 1] && ai <= a[m] {
		b := append(a[:m], append([]int{ai}, a[m:]...)...)
		return append(b, a[m + 1:]...)
	}

	if ai > a[m] {
		return append(a[:m], insert(a[m:], ai)...)
	}

	return append(insert(a[:m], ai), a[m:]...)
}

func sum(a []int) int {
	s := 0
	for _, ai := range a {
		s += ai
	}

	return s
}
