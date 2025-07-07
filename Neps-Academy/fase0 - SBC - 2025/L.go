package main
import (
	"fmt"
)

func main() {
	var n int64;
	fmt.Scanf("%d", &n);
	var m int = 0;
	var power int64 = 1;
	var total int64 = 8 * 1000000 * n;
	for power < total {
		power = power * 2;
		m++;
	}
	fmt.Printf("%d\n", m);
}