# LeetCode
##### 11. 盛最多水的容器
  双指针，指向收尾，收缩
  收缩时考虑短板
  res = height[i] < height[j] ? 
                Math.max(res, (j - i) * height[i++]): 
                Math.max(res, (j - i) * height[j--]); 
##### 17. 电话号码的字母组合
  循环层数不确定，因此采用DFS来处理循环，到达末尾的条件用index做判断

 
