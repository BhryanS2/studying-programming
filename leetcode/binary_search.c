#include<stdio.h>
#include<stdlib.h>

int search(int* nums, int numsSize, int target) {
  int l = 0, r = numsSize - 1;
  while (l <= r) {
    // para evitar overflow
    int mid = l + (r - l) / 2;
    // overflow pode acontecer se l e r forem muito grandes
    if (nums[mid] == target) {
      return mid;
    }
    else if (nums[mid] < target) {
      l = mid + 1;
    }
    else {
      r = mid - 1;
    }
  }
  return -1;  // Target not found

}

void main() {
  int nums[] = { -1, 0, 3, 5, 9, 12 };
  int target = 9;
  int result = search(nums, sizeof(nums) / sizeof(nums[0]), target);
  printf("Index of target %d: %d\n", target, result);
  target = 2;
  result = search(nums, sizeof(nums) / sizeof(nums[0]), target);
  printf("Index of target %d: %d\n", target, result);
}