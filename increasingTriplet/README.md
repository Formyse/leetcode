题目：递增的三元子序列

给你一个整数数组 nums ，判断这个数组中是否存在长度为 3 的递增子序列。

如果存在这样的三元组下标 (i, j, k) 且满足 i < j < k ，使得 nums[i] < nums[j] < nums[k] ，返回 true ；否则，返回 false 。

提示：

1 <= nums.length <= 5 * 105

-231 <= nums[i] <= 231 - 1

方法：利用嵌套if判断维护两个变量，遍历一次数组即可解决。
