package main

import "fmt"

func main() {
	nums := []int{2, 5, 7, 8, 3, 1, 9, 6, 4, 8, 3}
	fmt.Println(fastSort(nums))
}
func fastSort(arr []int) []int {
	if len(arr) <= 1 {
		return arr
	}
	key := arr[0]
	var right, left []int
	for _, j := range arr[1:] {
		if j >= key {
			right = append(right, j)
		} else {
			left = append(left, j)
		}
	}
	right = fastSort(right)
	left = fastSort(left)
	return append(append(left, key), right...)
}
