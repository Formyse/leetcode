**题目：统计特殊四元组**



方法一：四层循环，遍历整个数组，满足条件即可

​               优点：想法简单，空间复杂度低

​               缺点：时间复杂度高 O（n^4）



方法二：利用`nums[a]+nums[b]+nums[c]==nums[d]`关系式，把`nums[d]`放入哈希表，只需加和前三个与哈希表作比较相等就+1

​                优点：使用了哈希表，时间复杂度较方法一有很大提升 O（n^3）

​                缺点：空间复杂度提升了



方法三：利用`nums[a]+nums[b]==nums[d]-nums[c]`关系式，把`nums[d]-nums[c]`放入哈希表，与前两个和作比较相等+1

​                优点：只有两层循环，时间复杂度低O（n^2）

​                缺点：空间复杂度提升了
